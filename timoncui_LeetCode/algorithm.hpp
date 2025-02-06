#include <functional>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <iostream>

namespace jcui {
namespace algorithm {

// Return first location where comp(a, b) is not true.
template<class ForwardIterator1, class ForwardIterator2, class Compare>
ForwardIterator1 lower_bound(ForwardIterator1 begin1,
			     ForwardIterator1 end1,
			     ForwardIterator2 begin2,
			     ForwardIterator2 end2,
			     Compare comp) {
  int len = end1 - begin1;
  while (len > 0) {
    int half = len >> 1;
    ForwardIterator1 m1 = begin1 + half;
    ForwardIterator2 m2 = begin2 + half;
    if (comp(*m1, *m2)) {
      begin1 = m1 + 1;
      begin2 = m2 + 1;
      len -= (half + 1);
    } else {
      len = half;
    }
  }
  return begin1;
}

// Return min_x max(inc[x], dec[x]) where inc and dec are non-decreasing and non-increasing   
template<class T, class ForwardIterator1, class ForwardIterator2> 
T min_max(ForwardIterator1 inc_begin,
	  ForwardIterator1 inc_end,
	  ForwardIterator2 dec_begin,
	  ForwardIterator2 dec_end,
	  T default_value) {
  int len = inc_end - inc_begin;
  if (len == 0) return default_value;
  ForwardIterator1 it = lower_bound(inc_begin, inc_end, dec_begin, dec_end, std::less<T>());
  if (it == inc_begin) return *inc_begin;
  if (it == inc_end) return *(dec_begin + len - 1);
  return min(*it, *(dec_begin + (it - inc_begin - 1)));
}

template<class T>
T pow(const T& x, int k) {
  if (k <= 1) return x;
  T y = pow(x, k / 2);
  y = y * y;
  if (k % 2) y = y * x;
  return y;
}
  
template<class T>
class Mat {
public:
  Mat(int H, int W) {
    v.resize(H);
    for (int i = 0; i < H; ++i) v[i].resize(W);
  }
  int H() const { return v.size(); }
  int W() const { return v.size() ? v[0].size() : 0; }  
  void set(int i, int j, T val) { if (valid(i, j)) v[i][j] = val; }
  T get(int i, int j) const { return valid(i, j) ? v[i][j] : 0; }
  void normalize_by_row_sum() {
    std::vector<T> s = Mat<T>::row_sum(*this);
    for (int i = 0; i < H(); ++i) {
      for (int j = 0; j < W(); ++j) {
	v[i][j] /= s[j];
      }
    }
  }
  static std::vector<T> row_sum(const Mat& A) {
    std::vector<T> y(A.W(), 0);
    for (int j = 0; j < A.W(); ++j) {
      for (int i = 0; i < A.H(); ++i) {
	y[j] += A.v[i][j];
      }
    }
    return y;
  }
  Mat operator*(const Mat& y) const {
    Mat p(H(), y.W());
    for (int i = 0; i < H(); ++i) {
      for (int j = 0; j < y.W(); ++j) {
	T s = 0;
	for (int k = 0; k < W(); ++k) {
	  s += v[i][k] * y.v[k][j];
	}
	p.v[i][j] = s;
      }      
    }
    return p;
  }
  std::vector<T> operator*(const std::vector<T>& x) const {
    std::vector<T> y(H(), 0);
    for (int i = 0; i < H(); ++i) {
      for (int j = 0; j < W(); ++j) {
	y[i] += v[i][j] * x[j];
      }
    }
    return y;
  }
  inline bool valid(int i, int j) const { return i >= 0 && i < H() && j >= 0 && j < W(); }
  void print() const {
    for (int i = 0; i < H(); ++i) {
      for (int j = 0; j < W(); ++j) {
	std::cout << v[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }
  std::vector<std::vector<T> > v;
};

template<class T>
class SparseMat {
public:
  typedef typename std::map<std::pair<int, int>, T>::const_iterator MapConstIter;
  typedef std::set<int>::iterator SetIter;

  SparseMat(int H, int W) {
    row_ids.resize(W);
    col_ids.resize(H);
  }
  int H() const { return col_ids.size(); }
  int W() const { return row_ids.size(); }
  void set(int i, int j, T val) {
    if (i < 0 || i >= H() || j < 0 || j >= W()) return;
    v[std::make_pair(i, j)] = val;
    rows.insert(i);
    cols.insert(j);
    row_ids[j].insert(i);
    col_ids[i].insert(j);
  }
  T get(int i, int j) const {
    MapConstIter it = v.find(std::make_pair(i, j));
    if (it == v.end()) return 0;
    return it->second;
  }
  void normalize_by_row_sum() {
    std::vector<T> s = SparseMat<T>::row_sum(*this);
    for (SetIter col = cols.begin(); col != cols.end(); ++col) {
      for (SetIter row = row_ids[*col].begin(); row != row_ids[*col].end(); ++row) {
	v[std::make_pair(*row, *col)] /= s[*col];
      }
    }
  }
  static std::vector<T> row_sum(const SparseMat& A) {
    std::vector<T> y(A.W(), 0);
    for (SetIter col = A.cols.begin(); col != A.cols.end(); ++col) {
      for (SetIter row = A.row_ids[*col].begin(); row != A.row_ids[*col].end(); ++row) {
	y[*col] += A.v.find(std::make_pair(*row, *col))->second;
      }
    }
    return y;
  }
  std::vector<T> operator*(const std::vector<T>& x) const {
    std::vector<T> y(H(), 0);
    for (SetIter r = rows.begin(); r != rows.end(); ++r) {
      for (SetIter k = col_ids[*r].begin(); k != col_ids[*r].end(); ++k) {
	y[*r] += v.find(std::make_pair(*r, *k))->second * x[*k];
      }
    }
    return y;
  }
  SparseMat operator*(const SparseMat& y) const {
    SparseMat p(H(), y.W());
    std::vector<int> intersect(W());
    typedef std::vector<int>::iterator VecIter;
    for (SetIter r = rows.begin(); r != rows.end(); ++r) {
      for (SetIter c = y.cols.begin(); c != y.cols.end(); ++c) {
	T s = 0;
	VecIter intersect_end = set_intersection(col_ids[*r].begin(),
						 col_ids[*r].end(),
						 y.row_ids[*c].begin(), 
						 y.row_ids[*c].end(), 
						 intersect.begin());
	for (VecIter k = intersect.begin(); k != intersect_end; ++k) {
	  s += v.find(std::make_pair(*r, *k))->second * y.v.find(std::make_pair(*k, *c))->second;
	}
	if (s != 0) p.set(*r, *c, s);
      }
    }
    return p;
  }
  void print() const {
    for (MapConstIter i = v.begin(); i != v.end(); ++i) {
      std::cout << "(" << i->first.first << ", " << i->first.second << ") = " << i->second << std::endl;
    }
  }
  std::map<std::pair<int, int>, T> v;
  std::set<int> rows, cols;
  std::vector<std::set<int> > row_ids, col_ids;
};

template<class T>
class SparseMatCSR {
public:
  SparseMatCSR(const SparseMat<T>& m) {
    v.resize(m.v.size());
    col.resize(m.v.size());
    cum_n.resize(1 + m.H());
    if (v.size() == 0) return;

    cum_n[0] = 0;
    int i = 0;
    for (int r = 0; r < H(); ++r) {
      for (std::set<int>::iterator k = m.col_ids[r].begin(); k != m.col_ids[r].end(); ++k) {
	v[i] = m.v.find(std::make_pair(r, *k))->second;
	col[i] = *k;
	i ++;
      }
      cum_n[r + 1] = i;
    }
  }
  int H() const { return cum_n.size() - 1; }
  std::vector<T> operator*(const std::vector<T>& x) const {
    std::vector<T> y(H(), 0);
    for (int i = 0; i < H(); ++i) {
      for (int ind = cum_n[i]; ind < cum_n[i + 1]; ++ind) {
	y[i] += x[col[ind]] * v[ind];
      }
    }
    return y;
  }
  /* Example: For m = [0, 0, 1, 0; 2, 1, 0, 0; 0, 0, 1, 0],
     v = [1 2 1 1]
     col = [2 0 1 2]
     cum_n = [0 1 3 4] */
  std::vector<T> v;
  std::vector<int> col;
  std::vector<int> cum_n;
};

template<class T>
class RingBuffer {
public:
  RingBuffer(int N) : cur(0), size(0) { v.resize(N); } // N > 0
  void push_back(const T& val) {
    v[cur] = val;
    cur ++;
    if (cur >= v.size()) cur = 0;
    if (size < v.size()) size ++;
  }
  // Get value from last_write_position + offset
  T get(int offset, T default_val = 0) const {
    if (offset > 0 || offset <= -size) return default_val; // Cannot read future info, or info that got flushed
    int index = cur - 1 + offset;
    if (index < 0) index += size;
    return v[index];
  }     
  int N() const { return size; }
private:
  int cur;
  int size;
  std::vector<T> v;
};

// Split integer N using non-repeating numbers in [1, k]
std::vector<std::vector<int> > split_no_repeat(int N, int k) {
  std::vector<std::vector<int> > res;
  if (N <= 0 || N > k * (k + 1) / 2) return res;

  if (N == k) res.push_back(std::vector<int>(1, k));

  std::vector<std::vector<int> > partial = split_no_repeat(N - k, k - 1);
  for (int i = 0; i < partial.size(); ++i) {
    partial[i].push_back(k);
    res.push_back(partial[i]);
  }
  
  std::vector<std::vector<int> > rest = split_no_repeat(N, k - 1);
  res.insert(res.end(), rest.begin(), rest.end());

  return res;
}

} // namespace algorithm
} // namespace jcui

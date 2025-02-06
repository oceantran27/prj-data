#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/online-majority-element-in-subarray

class MajorityChecker {
 public:
  vector<int> arr;
  const int L = 800;
  unordered_map<int, vector<int>> pos;
  map<int, vector<int>> cntmap;
  MajorityChecker(vector<int>& arr) : arr(arr) {
    int N = arr.size();
    for (int i = 0; i < N; ++i) pos[arr[i]].push_back(i);
    for (auto& [v, vec] : pos) cntmap[vec.size()].push_back(v);
  }

  int query(int left, int right, int threshold) {
    if (threshold < L) {
      unordered_map<int, int> cur;
      for (int i = left; i <= right; ++i)
        if (++cur[arr[i]] == threshold) return arr[i];
      return -1;
    }

    for (auto mit = cntmap.lower_bound(threshold); mit != cntmap.end(); ++mit) {
      for (int v : mit->second) {
        auto& vec = pos[v];
        if (upper_bound(vec.begin(), vec.end(), right) -
                lower_bound(vec.begin(), vec.end(), left) >=
            threshold)
          return v;
      }
    }
    return -1;
  }
};


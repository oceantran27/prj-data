#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/advantage-shuffle

class Solution {
 public:
  vector<int> advantageCount(vector<int>& A, vector<int>& B) {
    int N = A.size();
    vector<int> indices(N), discard, ret(N);
    iota(indices.begin(), indices.end(), 0);
    sort(indices.begin(), indices.end(),
         [&B](int i, int j) { return B[i] < B[j]; });
    sort(A.begin(), A.end(), greater<int>());

    for (int i : indices) {
      while (!A.empty() and A.back() <= B[i]) {
        discard.push_back(A.back());
        A.pop_back();
      }
      vector<int>& cur = A.empty() ? discard : A;
      ret[i] = cur.back();
      cur.pop_back();
    }
    return ret;
  }
};

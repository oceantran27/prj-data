#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-submatrices-that-sum-to-target

class Solution {
 public:
  int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size(), ret = 0;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j)
        matrix[i][j] += (j ? matrix[i][j - 1] : 0) +
                        (i ? matrix[i - 1][j] : 0) -
                        ((i * j) ? matrix[i - 1][j - 1] : 0);
      for (int ii = 0; ii <= i; ++ii) {
        unordered_map<int, int> cnt;
        cnt[0] = 1;
        for (int j = 0; j < n; ++j) {
          int psum = matrix[i][j] - (ii ? matrix[ii - 1][j] : 0);
          ret += cnt[psum - target];
          ++cnt[psum];
        }
      }
    }
    return ret;
  }
};

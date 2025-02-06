#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/diagonal-traverse

class Solution {
 public:
  vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};

    int m = matrix.size(), n = matrix[0].size();

    vector<int> ret;
    for (int d = 0; d < m + n - 1; ++d) {
      if (d & 1) {
        for (int i = 0; i <= d; ++i)
          if (i < m and d - i < n) ret.push_back(matrix[i][d - i]);
      } else {
        for (int i = 0; i <= d; ++i)
          if (d - i < m and i < n) ret.push_back(matrix[d - i][i]);
      }
    }
    return ret;
  }
};

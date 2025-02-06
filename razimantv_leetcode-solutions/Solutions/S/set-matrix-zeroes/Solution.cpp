#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/set-matrix-zeroes

class Solution {
 public:
  void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> row(m), col(n);
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (!matrix[i][j]) row[i] = col[j] = 1;
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (row[i] or col[j]) matrix[i][j] = 0;
  }
};

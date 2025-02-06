#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-matrix-is-x-matrix

class Solution {
 public:
  bool checkXMatrix(vector<vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) {
        if (i == j or i + j == n - 1) {
          if (!grid[i][j]) return false;
        } else if (grid[i][j])
          return false;
      }
    return true;
  }
};

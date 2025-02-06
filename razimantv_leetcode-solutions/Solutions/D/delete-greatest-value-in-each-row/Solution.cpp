#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/delete-greatest-value-in-each-row/

class Solution {
 public:
  int deleteGreatestValue(vector<vector<int>>& grid) {
    for (auto& row : grid) sort(row.begin(), row.end());
    int m = grid.size(), n = grid[0].size();
    for (int i = 1; i < m; ++i)
      for (int j = 0; j < n; ++j) grid[i][j] = max(grid[i][j], grid[i - 1][j]);
    return accumulate(grid.back().begin(), grid.back().end(), 0);
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-path-cost-in-a-grid

class Solution {
 public:
  int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> convgrid(m * n);
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) convgrid[i * n + j] = moveCost[grid[i][j]];

    for (int i = m - 2; i >= 0; --i) {
      for (int j = 0; j < n; ++j) {
        int best = INT_MAX;
        for (int k = 0; k < n; ++k)
          best = min(best, grid[i + 1][k] + convgrid[i * n + j][k]);
        grid[i][j] += best;
      }
    }

    return *min_element(grid[0].begin(), grid[0].end());
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/max-area-of-island

class Solution {
 public:
  int m, n;
  int dfs(vector<vector<int>>& grid, int i, int j) {
    int cnt = 1;
    grid[i][j] = 0;
    int neigh[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    for (auto [di, dj] : neigh) {
      int ii = i + di, jj = j + dj;
      if (ii >= 0 and ii < m and jj >= 0 and jj < n and grid[ii][jj])
        cnt += dfs(grid, ii, jj);
    }
    return cnt;
  }
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int best = 0;
    m = grid.size(), n = grid[0].size();
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j)
        if (grid[i][j]) best = max(best, dfs(grid, i, j));
    return best;
  }
};

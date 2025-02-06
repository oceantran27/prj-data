#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/making-a-large-island

class Solution {
 public:
  const int neigh[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, -0}};
  int N;
  int dfs(int i, int j, int v, vector<vector<int>>& grid) {
    grid[i][j] = v;
    int ret = 1;
    for (auto [di, dj] : neigh) {
      int ii = i + di, jj = j + dj;
      if (ii >= 0 and ii < N and jj >= 0 and jj < N and grid[ii][jj] == 1)
        ret += dfs(ii, jj, v, grid);
    }
    return ret;
  }

  int largestIsland(vector<vector<int>>& grid) {
    N = grid.size();
    int best = 0;
    vector<int> s{0};
    for (int i = 0, x = 0; i < N; ++i)
      for (int j = 0; j < N; ++j)
        if (grid[i][j] == 1) {
          s.push_back(dfs(i, j, --x, grid));
          best = max(best, s.back());
        }

    for (int i = 0, x = 0; i < N; ++i)
      for (int j = 0; j < N; ++j) {
        if (grid[i][j]) continue;
        int cur = 1;
        unordered_set<int> islands;

        for (auto [di, dj] : neigh) {
          int ii = i + di, jj = j + dj;
          if (ii >= 0 and ii < N and jj >= 0 and jj < N and grid[ii][jj])
            islands.insert(-grid[ii][jj]);
        }

        for (int x : islands) cur += s[x];
        best = max(best, cur);
      }
    return best;
  }
};

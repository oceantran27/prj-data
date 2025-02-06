#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-islands

class Solution {
 public:
  vector<int> parent;

  int getparent(int u) {
    if (parent[u] == u)
      return u;
    else
      return parent[u] = getparent(parent[u]);
  }

  int merge(int u, int v) {
    int uu = getparent(u), vv = getparent(v);
    if (uu == vv) return 0;
    parent[uu] = vv;
    return 1;
  }

  int numIslands(vector<vector<char>>& grid) {
    if (grid.empty()) return 0;

    int M = grid.size(), N = grid[0].size();
    parent.resize(M * N);
    iota(parent.begin(), parent.end(), 0);

    int ret = 0;
    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        if (grid[i][j] == '0') continue;
        ret++;
        if (i < M - 1 and grid[i + 1][j] == '1')
          ret -= merge(i * N + j, (i + 1) * N + j);
        if (j < N - 1 and grid[i][j + 1] == '1')
          ret -= merge(i * N + j, i * N + j + 1);
      }
    }

    return ret;
  }
};

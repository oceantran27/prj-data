#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/island-perimeter

class Solution {
 public:
  int islandPerimeter(vector<vector<int>>& grid) {
    int M = grid.size(), N = grid[0].size();
    int ret = 0;
    for (int i = 0; i < M; ++i) {
      for (int j = 0; j < N; ++j) {
        if (grid[i][j] == 0) continue;
        if (i == 0 or grid[i - 1][j] == 0) ++ret;
        if (j == 0 or grid[i][j - 1] == 0) ++ret;
        if (i == M - 1 or grid[i + 1][j] == 0) ++ret;
        if (j == N - 1 or grid[i][j + 1] == 0) ++ret;
      }
    }
    return ret;
  }
};

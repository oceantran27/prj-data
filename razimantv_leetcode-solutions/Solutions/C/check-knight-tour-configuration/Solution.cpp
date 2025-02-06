#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-knight-tour-configuration/

class Solution {
 public:
  bool checkValidGrid(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<pair<int, int>> order(n * n);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) order[grid[i][j]] = {i, j};

    if (order[0] != make_pair(0, 0)) return false;
    for (int i = 1; i < n * n; ++i) {
      auto [x1, y1] = order[i - 1];
      auto [x2, y2] = order[i];
      int dx = abs(x2 - x1), dy = abs(y2 - y1);
      if (dx > dy) swap(dx, dy);
      if (dx != 1 or dy != 2) return false;
    }
    return true;
  }
};

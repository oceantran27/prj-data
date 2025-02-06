#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-strictly-increasing-cells-in-a-matrix/

class Solution {
 public:
  int maxIncreasingCells(vector<vector<int>>& mat) {
    map<int, vector<pair<int, int>>> valtopos;
    int m = mat.size(), n = mat[0].size();
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) valtopos[mat[i][j]].push_back({i, j});
    vector<int> dpi(m), dpj(n);
    int ret{};
    for (auto [k, v] : valtopos) {
      int L = v.size();
      vector<int> best(L);
      for (int x = 0; x < L; ++x) {
        auto [i, j] = v[x];
        best[x] = max(dpi[i], dpj[j]) + 1;
      }
      for (int x = 0; x < L; ++x) {
        auto [i, j] = v[x];
        dpi[i] = max(dpi[i], best[x]);
        dpj[j] = max(dpj[j], best[x]);
        ret = max(ret, best[x]);
      }
    }

    return ret;
  }
};

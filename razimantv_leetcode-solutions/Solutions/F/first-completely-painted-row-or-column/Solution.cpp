#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/first-completely-painted-row-or-column/

class Solution {
 public:
  int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
    int m = mat.size(), n = mat[0].size();
    unordered_map<int, pair<int, int>> pos(m * n);
    for (int i = 0; i < m; ++i)
      for (int j = 0; j < n; ++j) pos[mat[i][j]] = {i, j};

    vector<int> row(m), col(n);
    for (int i = 0; i < m * n; ++i) {
      auto [r, c] = pos[arr[i]];
      if (++row[r] == n or ++col[c] == m) return i;
    }
    return -1;
  }
};

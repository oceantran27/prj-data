#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-building-height

class Solution {
 public:
  int maxBuilding(int n, vector<vector<int>>& restrictions) {
    restrictions.push_back({1, 0});
    restrictions.push_back({n, n});
    sort(restrictions.begin(), restrictions.end());

    int m = restrictions.size();
    for (int i = 1; i < m; ++i) {
      restrictions[i][1] =
          min(restrictions[i][1], restrictions[i - 1][1] + restrictions[i][0] -
                                      restrictions[i - 1][0]);
    }
    for (int i = m - 2; i >= 0; --i) {
      restrictions[i][1] =
          min(restrictions[i][1], restrictions[i + 1][1] - restrictions[i][0] +
                                      restrictions[i + 1][0]);
    }

    int best = 0;
    for (auto& v : restrictions) best = max(best, v[1]);

    for (int i = 1; i < m; ++i) {
      int l = min(restrictions[i][1], restrictions[i - 1][1]);
      int r = max(restrictions[i][1], restrictions[i - 1][1]);
      int dn = restrictions[i][0] - restrictions[i - 1][0];
      best = max(best, r + ((dn - r + l) >> 1));
    }
    return best;
  }
};

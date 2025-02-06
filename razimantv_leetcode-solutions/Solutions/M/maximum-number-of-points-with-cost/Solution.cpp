#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-points-with-cost

class Solution {
 public:
  long long maxPoints(vector<vector<int>>& points) {
    int m = points.size(), n = points[0].size();
    vector<long long> cur(n);
    for (int i = 0; i < m; ++i) {
      for (long long j = 0, best = 0; j < n; ++j)
        cur[j] = best = max(best - 1, cur[j]);
      for (long long j = n - 1, best = 0; j >= 0; --j)
        cur[j] = max(cur[j], best = max(best - 1, cur[j])) + points[i][j];
    }
    return *max_element(cur.begin(), cur.end());
  }
};

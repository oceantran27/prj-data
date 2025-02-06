#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/max-points-on-a-line

class Solution {
 public:
  int maxPoints(vector<vector<int>>& points) {
    int N = points.size(), best = 0;
    auto cmp = [](const vector<int>& u, const vector<int>& v) {
      return u[1] * v[0] < v[1] * u[0];
    };
    for (int i = 0; i < N; ++i) {
      map<vector<int>, int, decltype(cmp)> slopes(cmp);
      for (int j = 0; j < i; ++j) {
        vector<int> cur{points[i][0] - points[j][0],
                        points[i][1] - points[j][1]};
        if (cur[0] < 0)
          cur[0] = -cur[0], cur[1] = -cur[1];
        else if (cur[0] == 0)
          cur[1] = abs(cur[1]);
        best = max(best, ++slopes[cur]);
      }
    }
    return best + 1;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons

class Solution {
 public:
  int findMinArrowShots(vector<vector<int>>& points) {
    if (points.empty()) return 0;
    sort(
        points.begin(), points.end(),
        [](const vector<int>& a, const vector<int>& b) { return a[1] < b[1]; });
    int cnt = 1, right = points[0][1];
    for (const auto& v : points)
      if (v[0] > right) ++cnt, right = v[1];
    return cnt;
  }
};

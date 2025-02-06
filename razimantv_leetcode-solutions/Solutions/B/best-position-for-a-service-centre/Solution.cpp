#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-position-for-a-service-centre

class Solution {
 public:
  double getMinDistSum(vector<vector<int>>& positions) {
    int N = positions.size();
    double bestr = 1e9;
    for (double xmin = 0, ymin = 0, dl = 100; dl > 1e-6; dl /= 5) {
      double curx = 0, cury = 0, curbest = 1e9;
      for (int i = 0; i <= 10; ++i)
        for (int j = 0; j <= 10; ++j) {
          double x = xmin + i * dl / 10, y = ymin + j * dl / 10, r = 0;
          for (auto& p : positions) r += hypot(p[0] - x, p[1] - y);
          if (r < curbest) curbest = r, curx = x, cury = y;
        }

      bestr = min(bestr, curbest);
      xmin = curx - dl / 10;
      ymin = cury - dl / 10;
    }
    return bestr;
  }
};

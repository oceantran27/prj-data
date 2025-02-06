#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-speed-to-arrive-on-time

class Solution {
 public:
  bool poss(const vector<int>& dist, double hour, double speed) {
    double t = 0;
    for (int n : dist) {
      if (t - floor(t) > 1e-10) t = floor(t) + 1;
      t += n / speed;
    }
    return t <= hour;
  }

  int minSpeedOnTime(vector<int>& dist, double hour) {
    if (!poss(dist, hour, 2e7)) return -1;
    int start = 0, end = 10'000'000;
    while (end - start > 1) {
      int mid = (start + end) >> 1;
      (poss(dist, hour, mid) ? end : start) = mid;
    }
    return end;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-time-to-complete-trips/

class Solution {
 public:
  long long minimumTime(vector<int>& time, int totalTrips) {
    auto poss = [&](long long t) {
      long long cnt{};
      for (int x : time)
        if ((cnt += t / x) >= totalTrips) return true;
      return false;
    };
    long long start = 0, end = totalTrips * 1ll * time[0];
    while (end - start > 1) {
      long long mid = (end + start) >> 1;
      (poss(mid) ? end : start) = mid;
    }
    return end;
  }
};

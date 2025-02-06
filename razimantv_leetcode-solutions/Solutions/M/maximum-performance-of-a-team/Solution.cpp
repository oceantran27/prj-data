#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-performance-of-a-team

class Solution {
 public:
  int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency,
                     int k) {
    typedef pair<int, int> eng;
    vector<eng> all(n);
    for (int i = 0; i < n; ++i) all[i] = {efficiency[i], speed[i]};
    sort(all.begin(), all.end(), greater<eng>());

    long long best = 0, ssum = 0;
    multiset<int> bestspeed;
    for (int i = 0; i < n; ++i) {
      auto [e, s] = all[i];
      ssum += s;
      bestspeed.insert(s);
      if (bestspeed.size() > k) {
        ssum -= *bestspeed.begin();
        bestspeed.erase(bestspeed.begin());
      }
      best = max(best, e * ssum);
    }
    return best % 1'000'000'007;
  }
};

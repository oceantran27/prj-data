#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-refueling-stops

class Solution {
 public:
  int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    if (target <= startFuel)
      return 0;
    else if (stations.empty() or startFuel < stations[0][0])
      return -1;

    int N = stations.size(), pos = 0;
    vector<long long> best(N + 1, startFuel);
    for (auto& v : stations) {
      int p = v[0], f = v[1];
      for (int i = N; i >= 0; --i) {
        best[i] -= p - pos;
        if (i and best[i - 1] >= p - pos)
          best[i] = max(best[i], best[i - 1] - (p - pos) + f);
      }
      pos = p;
    }
    for (int i = 0; i <= N; ++i)
      if (best[i] >= target - pos) return i;
    return -1;
  }
};

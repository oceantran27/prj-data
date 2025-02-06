#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii

class Solution {
 public:
  int maxValue(vector<vector<int>>& events, int k) {
    int N = events.size();
    sort(events.begin(), events.end());
    vector<vector<int>> DP(N + 1, vector<int>(k + 1, 0));

    for (int i = N - 1; i >= 0; --i) {
      vector<int> temp{events[i][1], INT_MAX};
      int j = upper_bound(events.begin(), events.end(), temp) - events.begin();
      for (int kk = 1; kk <= k; ++kk)
        DP[i][kk] = max(DP[i + 1][kk], DP[j][kk - 1] + events[i][2]);
    }
    return *max_element(DP[0].begin(), DP[0].end());
  }
};

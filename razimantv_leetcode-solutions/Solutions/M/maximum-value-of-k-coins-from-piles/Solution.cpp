#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/

class Solution {
 public:
  int maxValueOfCoins(vector<vector<int>>& piles, int k) {
    vector<int> dp(k + 1);
    int all{};
    for (auto& pile : piles) {
      auto cur{dp};
      for (int i = 1, n = pile.size(), pref = 0; i <= n and i <= k; ++i) {
        pref += pile[i - 1];
        ++all;
        for (int j = min(all, k); j >= i; --j)
          cur[j] = max(cur[j], pref + dp[j - i]);
      }
      dp = cur;
    }
    return dp[k];
  }
};

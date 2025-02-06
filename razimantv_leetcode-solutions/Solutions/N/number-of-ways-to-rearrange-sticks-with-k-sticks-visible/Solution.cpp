#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-ways-to-rearrange-sticks-with-k-sticks-visible

class Solution {
 public:
  int rearrangeSticks(int n, int k) {
    vector<vector<int>> ncr(n + 1), dp(n + 1);
    ncr[0] = dp[0] = vector<int>(1, 1);

    const int mod = 1'000'000'007;
    for (int i = 1; i <= n; ++i) {
      ncr[i].resize(i + 1);
      ncr[i][0] = ncr[i][i] = 1;
      for (int j = 1; j < i; ++j) {
        ncr[i][j] = ncr[i - 1][j] + ncr[i - 1][j - 1];
        if (ncr[i][j] >= mod) ncr[i][j] -= mod;
      }

      dp[i].resize(i + 1);
      dp[i][i] = 1;
      for (int j = 1; j < i; ++j) {
        dp[i][j] = (dp[i - 1][j - 1] + (i - 1) * (long long)dp[i - 1][j]) % mod;
      }
    }
    return dp[n][k];
  }
};

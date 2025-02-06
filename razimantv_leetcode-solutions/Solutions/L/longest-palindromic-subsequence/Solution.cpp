#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution {
 public:
  int longestPalindromeSubseq(string s) {
    int n = s.size();
    vector<int> dp2(n), dp1(n, 1);
    for (int l = 2; l <= n; ++l) {
      vector<int> dp(n - l + 1);
      for (int i = 0, j = i + l - 1; j < n; ++i, ++j)
        dp[i] = (s[i] == s[j]) ? (dp2[i + 1] + 2) : max(dp1[i], dp1[i + 1]);
      dp2 = dp1;
      dp1 = dp;
    }
    return dp1[0];
  }
};

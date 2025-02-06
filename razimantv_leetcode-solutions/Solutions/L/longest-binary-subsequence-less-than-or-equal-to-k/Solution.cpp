#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k

class Solution {
 public:
  int longestSubsequence(string s, int k) {
    int n = s.size(), m = 0, kk = k;
    while (kk) ++m, kk >>= 1;
    vector<int> dp(n + 1, k + 1);
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
      int lim = (s[n - 1 - i] == '0') ? i : min(i, m - 1);
      for (int j = lim; j >= 0; --j) {
        if (dp[j] > k) continue;
        if (s[n - 1 - i] == '0')
          dp[j + 1] = min(dp[j + 1], dp[j]);
        else
          dp[j + 1] = min(dp[j + 1], dp[j] | (1 << j));
      }
    }
    for (int i = n; i; --i)
      if (dp[i] <= k) return i;
    return 0;
  }
};

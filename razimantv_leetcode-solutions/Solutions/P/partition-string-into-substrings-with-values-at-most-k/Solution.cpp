#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/partition-string-into-substrings-with-values-at-most-k/

class Solution {
 public:
  int minimumPartition(string s, int k) {
    int L = s.size();
    vector<int> dp(L + 1, L + 1);
    dp[L] = 0;
    for (int i = L - 1; i >= 0; --i) {
      long long cur{};
      for (int j = i; j < L; ++j) {
        cur = cur * 10 + s[j] - '0';
        if (cur > k) break;
        dp[i] = min(dp[i], dp[j + 1] + 1);
      }
    }

    return dp[0] > L ? -1 : dp[0];
  }
};

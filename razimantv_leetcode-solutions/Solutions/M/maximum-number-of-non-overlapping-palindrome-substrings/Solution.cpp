#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-non-overlapping-palindrome-substrings/

class Solution {
 public:
  int maxPalindromes(string s, int K) {
    int n = s.size();
    vector<vector<int>> edge(n + 1);
    for (int i = 0; i < n; ++i) {
      for (int j = i, k = i; j >= 0 and k < n and s[j] == s[k]; --j, ++k)
        if (k - j + 1 >= K) edge[j].push_back(k + 1);
      for (int j = i, k = i + 1; j >= 0 and k < n and s[j] == s[k]; --j, ++k)
        if (k - j + 1 >= K) edge[j].push_back(k + 1);
    }
    vector<int> dp(n + 1);
    for (int i = 0; i < n; ++i) {
      for (int j : edge[i]) dp[j] = max(dp[j], dp[i] + 1);
      dp[i + 1] = max(dp[i], dp[i + 1]);
    }
    return dp[n];
  }
};

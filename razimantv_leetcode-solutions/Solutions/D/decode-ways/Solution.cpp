#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/decode-ways

class Solution {
 public:
  int numDecodings(string s) {
    int n = s.size();
    vector<int> dp(n);
    dp[0] = (s[0] != '0');
    for (int i = 1; i < n; ++i) {
      if (s[i] != '0') dp[i] = dp[i - 1];
      int x = (s[i - 1] - '0') * 10 + (s[i] - '0');
      if (x > 9 and x < 27) dp[i] += (i > 1) ? dp[i - 2] : 1;
    }
    return dp.back();
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  string countAndSay(int n) {
    vector<string> dp(n + 1);
    dp[1] = "1";
    for (int i = 1; i < n; ++i) {
      string s;
      int j = 0;
      while (j < dp[i].size()) {
        int k = 1;
        while (j + k < dp[i].size() && dp[i][j] == dp[i][j + k]) {
          ++k;
        }
        s += ('0' + k);
        s += dp[i][j];
        j += k;
      }
      dp[i + 1] = s;
    }
    return dp[n];
  }
};

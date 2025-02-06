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
  int integerBreak(int n) {
    vector<int> dp(n + 1);
    if (n <= 2)
      return 1;
    if (n == 3)
      return 2;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
      dp[i] = i;
      for (int j = i - 1; j >= 1; j--) {
        int no = (i - j);
        dp[i] = max(dp[i], no * dp[j]);
      }
    }
    return dp[n];
  }
};

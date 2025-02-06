#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/stone-game-iii/

class Solution {
 public:
  // Solution written entirely by ChatGPT
  string stoneGameIII(vector<int>& stoneValue) {
    int n = stoneValue.size();
    vector<int> dp(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {
      int take = 0;
      dp[i] = INT_MIN;

      for (int j = i; j < min(i + 3, n); j++) {
        take += stoneValue[j];
        dp[i] = max(dp[i], take - dp[j + 1]);
      }
    }

    if (dp[0] > 0)
      return "Alice";
    else if (dp[0] < 0)
      return "Bob";
    else
      return "Tie";
  }
};

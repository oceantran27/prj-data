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
  bool winnerSquareGame(int n) {
    vector<bool> dp(n + 1, false);
    for (int i = 0; i <= n; i++) {
      dp[i] = false;
      for (int j = 1; j * j <= i; j++) {
        if (!dp[i - j * j]) {
          dp[i] = true;
          break;
        }
      }
    }
    return dp[n];
  }
};

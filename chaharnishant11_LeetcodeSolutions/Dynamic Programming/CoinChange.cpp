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
    int coinChange(vector<int>& coins, int amount) {
        int m = amount + 1;
        int dp[amount + 1];
        for(int i=0;i<=amount;i++) dp[i]=m;
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
          for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= i) {
              dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
          }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};
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
  int maxProfit(vector<int>& prices) {
    if (prices.size() <= 1) {
      return 0;
    }
    vector<int> dp(prices.size());
    for (int i = 1; i < dp.size(); ++i) {
      dp[i] = max(dp[i - 1], dp[i - 1] + prices[i] - prices[i - 1]);
    }
    return dp.back();
  }
};

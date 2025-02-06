#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int ret = 0, N = prices.size();
    for (int i = 0; i < N; i++) {
      if (i < N - 1 and prices[i] < prices[i + 1]) ret -= prices[i];
      if (i > 0 and prices[i] > prices[i - 1]) ret += prices[i];
    }
    return ret;
  }
};

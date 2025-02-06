#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    if (prices.empty()) return 0;

    int n = prices.size();
    vector<int> b(n);
    for (int i = 1, m = prices[0]; i < n; ++i) {
      b[i] = max(b[i - 1], prices[i] - m);
      m = min(prices[i], m);
    }

    int best = b.back(), rbest = 0;
    for (int i = n - 2, m = prices[n - 1]; i > 1; --i) {
      rbest = max(rbest, m - prices[i]);
      best = max(best, rbest + b[i - 1]);
      m = max(prices[i], m);
    }
    return best;
  }
};

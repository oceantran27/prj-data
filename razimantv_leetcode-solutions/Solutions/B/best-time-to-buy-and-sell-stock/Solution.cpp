#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int best = 0, m = prices.empty() ? 0 : prices[0];
    for (int p : prices) best = max(best, p - m), m = min(p, m);
    return best;
  }
};

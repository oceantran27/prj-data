#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee

class Solution {
 public:
  int maxProfit(vector<int>& prices, int fee) {
    int bestwithout = 0, bestwith = -2'000'000'000;
    for (int p : prices) {
      int newbest = max(bestwithout, bestwith + p);
      bestwith = max(bestwith, bestwithout - p - fee);
      bestwithout = newbest;
    }
    return bestwithout;
  }
};

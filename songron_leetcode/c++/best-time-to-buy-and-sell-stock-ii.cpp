#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        /*
        https://oj.leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
        */
        
        int profit = 0, buy = INT_MAX;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            }
            else if (i == prices.size() - 1 || prices[i] > prices[i+1]) {
                profit += prices[i] - buy;
                buy = prices[i];
            }
        }
        
        return profit;
    }
};
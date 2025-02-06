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
        int profit = 0, min_val = INT_MAX;
        for(int i = 0; i < prices.size(); ++i) {
            min_val = min(min_val, prices[i]);
            profit = max(profit, prices[i] - min_val);
        }
        return profit;
    }
};
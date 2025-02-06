#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int minVal = 10001;
        int maxProfit = 0;
        
        if (prices.empty()) {
            return 0;
        }
        
        for (int i = 0; i < len; i++) {
            if (prices[i] < minVal) {
                minVal = prices[i];
            }
            
            maxProfit = max(maxProfit, prices[i] - minVal);
        }
        
        return maxProfit;
    }
};

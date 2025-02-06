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
        
        int buy = INT_MIN, sell = 0, sellPrev=0, buyPrev;
        for( int i=0; i<prices.size();i++)
        {
            buyPrev = buy;
            buy = max(sellPrev - prices[i], buy );
            sellPrev = sell;
            sell = max(buyPrev + prices[i], sell );
        }
        return sell;
    }
};

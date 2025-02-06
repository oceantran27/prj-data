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
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        size_t i = 0;
        while (i < prices.size())
        {
            while (i + 1 < prices.size() && prices[i + 1] <= prices[i])
            {
                i += 1;
            }
            int buy = prices[i];
            i += 1;
            
            if (i >= prices.size())
            {
                break;
            }
            
            while (i + 1 < prices.size() && prices[i + 1] >= prices[i])
            {
                i += 1;
            }
            int cell = prices[i];
            i += 1;
            
            profit += (cell - buy);
        }
        
        return profit;
    }
};

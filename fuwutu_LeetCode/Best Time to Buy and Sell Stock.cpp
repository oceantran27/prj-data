#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        
        if (!prices.empty())
        {
            int buy = prices[0];
            for (size_t i = 1; i < prices.size(); ++i)
            {
                if (prices[i] - buy > profit)
                {
                    profit = prices[i] - buy;
                }
                if (prices[i] < buy)
                {
                    buy = prices[i];
                }
            }    
        }

        return profit;
    }
};

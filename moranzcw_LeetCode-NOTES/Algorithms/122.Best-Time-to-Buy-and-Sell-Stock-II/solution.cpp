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
        int m = prices.size();
        if(m == 0)
            return 0;
            
        int ret = 0;
        int buy = prices[0];
        int last = prices[0];
        for(int i = 1; i < m; i ++)
        {
            if(prices[i] < last)
            {
                ret += (last - buy);
                buy = prices[i];
            }
            last = prices[i];
        }
        ret += (last - buy);
        return ret;
    }
};
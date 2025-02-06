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
    	int i = 0, maxProfit = 0, low = INT_MAX;
    	for(i = 0; i < prices.size(); ++i)
    	{
    		low = min(low, prices[i]);
    		maxProfit = max(maxProfit, prices[i]-low);
    	}
    	return maxProfit;
    }
};
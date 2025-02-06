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
    int maxProfit(vector<int>& prices, int fee) {
        int i, n = prices.size(), moneyNoCash = 0, moneyHoldCash = -prices[0];
        for(i = 1; i < n; ++i)
        {
        	moneyNoCash = max(moneyNoCash, moneyHoldCash+prices[i]-fee);
        	moneyHoldCash = max(moneyHoldCash, moneyNoCash-prices[i]);
	    }
	    return moneyNoCash;
    }
};
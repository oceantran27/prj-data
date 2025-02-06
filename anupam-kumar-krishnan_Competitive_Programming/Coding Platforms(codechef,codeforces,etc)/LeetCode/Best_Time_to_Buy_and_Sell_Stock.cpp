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
        int maxprofit=0;
        int minm=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            minm=min(minm,prices[i]);
            int profit=prices[i]-minm;
            maxprofit=max(maxprofit,profit);
            
        }
        return maxprofit;
    }
};

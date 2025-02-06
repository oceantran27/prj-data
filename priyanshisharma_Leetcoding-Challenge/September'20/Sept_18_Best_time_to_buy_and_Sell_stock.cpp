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
        
        int maxprof = 0;
        int min = INT_MAX;
        for(int i = 0;i<prices.size();i++)
        {
            if (prices[i] < min)
                min = prices[i];
            
            else if (prices[i] - min > maxprof)
                maxprof = prices[i] - min;
        }
        
        
        return maxprof;
        
    }
};

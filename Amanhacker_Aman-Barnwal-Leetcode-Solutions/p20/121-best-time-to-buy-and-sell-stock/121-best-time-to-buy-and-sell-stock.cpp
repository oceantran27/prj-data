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
    
        int n = prices.size();
        
        if(n <= 1)                          return 0;
        
        int maxi = 0;
        int minLeft = prices[0];            // Min prices from left side
        
        for(int i=1; i<n; i++) {
            maxi = max(maxi, prices[i] - minLeft);
            minLeft = min(minLeft, prices[i]);
        }        
        
        return maxi;
    }
    
};
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
        
        int i=1, prof=0;
        
        while(i<prices.size())
        {
            if(prices[i]>prices[i-1])
                prof += prices[i]-prices[i-1];
                
            i++;
            
        }
        return prof;
        
    }
};

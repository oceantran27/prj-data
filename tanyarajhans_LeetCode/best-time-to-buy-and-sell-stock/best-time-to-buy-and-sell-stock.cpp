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
        int mini=INT_MAX;
        int maxp=0;
        if(prices.size()<=1)
            return 0;
        for(int i=0;i<prices.size();i++){
            mini=min(prices[i], mini);
            maxp=max(maxp, prices[i]-mini);
        }
        return maxp;
    }
};
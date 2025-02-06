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
        int buy = INT_MAX,sell,maxprofit = 0;
        for(int i = 0;i < prices.size();i++){
            if(prices[i] < buy) buy = prices[i];
            else if(prices[i] > buy){ 
                sell = prices[i];       
                if(sell - buy > maxprofit)  maxprofit = sell - buy;
            }
        }
        return maxprofit;
    }
};
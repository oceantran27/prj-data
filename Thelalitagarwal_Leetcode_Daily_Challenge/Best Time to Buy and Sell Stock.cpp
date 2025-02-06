#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the "Best Time to Buy and Sell Stock" Problem ==>>  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/Rp7dTS4gAJ0

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = INT_MAX;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            profit = max(profit,(prices[i] - buy));
        }
        return profit;
    }
};
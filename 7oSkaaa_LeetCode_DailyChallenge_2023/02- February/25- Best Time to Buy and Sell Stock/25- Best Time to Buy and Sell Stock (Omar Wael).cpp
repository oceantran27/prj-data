#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Author : Omar Wael
// leetcode account : https://leetcode.com/OmarWael1/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX,profit=0;
        for(auto i:prices){
            // updat min price till ith day
            mn=min(i,mn);
            // update best profit
            // (i-mn)-> buy at the minimum price day and sell at the ith day
            profit=max((i-mn),profit);
        }
        return profit;
    }
};


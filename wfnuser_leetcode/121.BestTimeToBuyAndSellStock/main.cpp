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
        int small = 2147483647;
        int profit = 0;
        vector<int>::iterator it;
        
        for (it = prices.begin(); it != prices.end(); it++) {
            if (small > *it){
                small = *it;
            }
            if ((*it - small) > profit) {
                profit = *it -small;
            }
        }
        
        return profit;
    }
};

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
        
        if(n == 0){
            return 0;
        }
        
        int mini = prices[0];
        int sol = 0;
        
        vector<int> temp(n, 0);
        
        for(int i = 1; i < n; i++){
            if(prices[i] < mini){
                mini = prices[i];
            }
            temp[i] = prices[i] - mini;
            sol = max(sol, temp[i]);
        }
        
        return sol;
    }
};

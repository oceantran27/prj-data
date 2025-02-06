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
        int minPrice = INT_MAX, maxProfit = 0;
        for (int p : prices) {
            maxProfit = max(maxProfit, p - minPrice);
            minPrice = min(minPrice, p);
        }
        
        return maxProfit;
    }
};

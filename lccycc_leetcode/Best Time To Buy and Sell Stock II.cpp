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
    if prices[i] > prices[i-1], add prices[i] - prices[i-1] to the answer
*/
    

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int tot = 0;
        int n = prices.size();
        for (int i = 1; i<n; i++){
            if (prices[i] > prices[i-1]){
                tot += prices[i]-prices[i-1];
            }
        }
        return tot;
    }
};

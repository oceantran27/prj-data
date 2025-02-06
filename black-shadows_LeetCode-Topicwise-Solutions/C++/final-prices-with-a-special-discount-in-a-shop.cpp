#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> stk;
        for (int i = 0; i < prices.size(); ++i) {
            while (!stk.empty() && prices[stk.back()] >= prices[i]) {
                prices[stk.back()] -= prices[i];
                stk.pop_back();
            }
            stk.emplace_back(i);
        }
        return prices;
    }
};

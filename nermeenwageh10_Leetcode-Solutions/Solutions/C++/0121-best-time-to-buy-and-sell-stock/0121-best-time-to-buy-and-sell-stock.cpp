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
        int mx = 0, mn = 1e9, n = prices.size();
        for (int i = 0; i < n; i++){
            mx = max(mx, prices[i] - mn);
            mn = min(mn, prices[i]);
        }
        return mx;
    }
};
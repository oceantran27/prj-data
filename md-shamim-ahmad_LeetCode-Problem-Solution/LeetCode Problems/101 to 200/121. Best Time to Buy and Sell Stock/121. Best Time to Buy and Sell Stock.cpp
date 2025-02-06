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
    int maxProfit(vector<int> &prices) {
        int l = 0, mx = 0, r = 1;
        while (r < prices.size()) {
            if (prices[r] < prices[l])
                l = r;
            else
                mx = max(mx, prices[r] - prices[l]);
            r += 1;
        }
        return mx;
    }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

// easy
#include <algorithm>
#include <climits>
using std::max;
using std::min;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int low = INT_MAX;
        int res = 0;
        int i;
        for (i = 0; i < n; ++i) {
            low = min(low, prices[i]);
            res = max(res, prices[i] - low);
        }
        return res;
    }
};

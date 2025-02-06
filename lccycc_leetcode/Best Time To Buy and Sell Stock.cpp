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
    ask whether should by at least one stock or not
    for each prices[i], update answer by prices[i] - MIN{prices[0..i-1]}
*/

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        if (n<2) return 0;
        int minv = prices[0];
        int res = 0;
        for (int i = 1; i<n; i++){
            res = max(res, prices[i] - minv);
            minv = min(minv, prices[i]);
        }
        return res;
    }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy=INT_MAX, sell=0;
        for(int i=0;i<p.size();i++){
            buy=min(buy, p[i]);
            sell=max(sell, p[i]-buy);
        }
        return sell;
    }
};
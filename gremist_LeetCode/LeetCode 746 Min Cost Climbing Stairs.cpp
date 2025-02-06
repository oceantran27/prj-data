#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 746 Min Cost Climbing Stairs.cpp

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(2);
        for (int i = 0; i < cost.size(); i++) {
            dp[i % 2] = min(dp[0], dp[1]) + cost[i];
        }
        return min(dp[0], dp[1]);
    }
};
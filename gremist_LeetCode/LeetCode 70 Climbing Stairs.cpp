#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 70 Climbing Stairs.cpp

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp = {1, 1};
        for (int i = 2; i <= n; i++) {
            dp[i % 2] = dp[0] + dp[1];
        }
        return dp[n % 2];
    }
};
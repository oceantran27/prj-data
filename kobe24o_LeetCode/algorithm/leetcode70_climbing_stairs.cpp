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
    int climbStairs(int n) 
    {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int dp[n];
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2; i < n; ++i)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n-1];
    }
};

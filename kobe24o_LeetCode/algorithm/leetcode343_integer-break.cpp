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
    int integerBreak(int n) {
        int dp[n+1] = {0};
        dp[2] = 1;
        int i, j;
        for(i = 3; i <= n; ++i)
        {
        	for(j = 1; j <= i-2; ++j)
        		dp[i] = max(dp[i], max(j*dp[i-j], j*(i-j)));
        }
        return dp[n];
    }
};
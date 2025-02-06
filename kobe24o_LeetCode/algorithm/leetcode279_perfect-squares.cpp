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
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        int i, j;
        for(i=0; i<=n; i++)
        {
            for(j=1; i+j*j <= n; j++)
            {
                dp[i+j*j] = min(dp[i+j*j],dp[i]+1);
            }
        }
        return dp[n];
    }
};
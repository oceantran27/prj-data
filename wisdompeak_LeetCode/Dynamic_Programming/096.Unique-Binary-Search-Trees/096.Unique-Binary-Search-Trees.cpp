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
    int numTrees(int n) 
    {
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for (int i=2; i<=n; i++)
        {
            dp[i] = 0;
            for (int j=0; j<=i-1; j++)
                dp[i] += dp[j]*dp[i-1-j];
        }
        return dp[n];        
    }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

using LL = long long;
LL M = 1e9+7;
class Solution {    
    LL dp[305][305];
public:    
    int numberOfWays(int n, int x) 
    {                        
        dp[0][0] = 1;
        
        for (int i=0; i<=n; i++)        
            for (int j=1; j<=n; j++)
            {
                dp[i][j] = dp[i][j-1];

                LL num = 1;
                for (int t=0; t<x; t++)
                    num *= j;

                if (num <= i)
                {
                    dp[i][j] += dp[i-num][j-1];
                    dp[i][j] %= M;
                }                
            }            
                        
        return dp[n][n];
    }
};

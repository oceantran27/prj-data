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
    long mod = 1e9+7;
    int find(int n,vector<int>&dp)
    {
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=(2*find(n-1,dp)%mod + find(n-3,dp)%mod)%mod;
    return dp[n];
    }
    int numTilings(int n) {
    vector<int>dp(1001,-1);
    dp[0] =1,dp[1]=1,dp[2]=2;
     return find(n,dp);
    }
};

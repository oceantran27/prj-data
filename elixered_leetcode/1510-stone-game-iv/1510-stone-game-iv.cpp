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
    vector<int> dp;
    bool solve(int n)
    {
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(dp[n]!=-1) return dp[n];
        for(int i=1; i*i<=n; i++)
        {
            if(solve(n-i*i)==false)
                return dp[n]= true;
        }
        return dp[n]= false;
    }
    bool winnerSquareGame(int n) {
        dp = vector<int>(n+1,-1);
        return solve(n);
    }
};
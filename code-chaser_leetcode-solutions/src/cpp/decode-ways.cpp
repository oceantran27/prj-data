#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/submissions/detail/812935762/
class Solution 
{
public:
    
    int helper(string &s,int ind, int n,vector<int> &dp)
    {
        if(ind<n and s[ind] == '0') return 0;
        if(ind >= n) return 1;
        
        if(dp[ind] != -1) return dp[ind];
        
        int ways = 0;
        
        ways+=helper(s,ind+1,n,dp);
        
        if((ind + 1 < n) and ((s[ind] == '1' and s[ind+1] <= '9') or (s[ind] == '2' and s[ind+1]<'7')))
            ways+=helper(s,ind+2,n,dp);
            
        return dp[ind] = ways;
    }
    
    int numDecodings(string s) 
    {
        int n = s.length();
        vector<int> dp(n,-1);
        return helper(s,0,n,dp);
    }
};
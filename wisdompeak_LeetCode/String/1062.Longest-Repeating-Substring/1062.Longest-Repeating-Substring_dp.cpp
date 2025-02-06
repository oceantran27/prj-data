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
    int longestRepeatingSubstring(string S) 
    {
        int n = S.size();
        S = "#"+S;
        auto dp = vector<vector<int>>(n+1,vector<int>(n+1,0));
        int ret = 0;
        
        for (int i=1; i<=n; i++)
            for (int j=1; j<=n; j++)
                if (i!=j && S[i]==S[j])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                    ret = max(ret, dp[i][j]);
                }        
        return ret;
    }
};

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
    bool repeatedSubstringPattern(string s) 
    {
        int n = s.size();
        vector<int>dp(n,0);
        for (int i=1; i<n; i++)
        {
            int j = dp[i-1];
            while (j>0 && s[j]!=s[i])
                j = dp[j-1];
            dp[i] = j+(s[j]==s[i]);
        }
        int len = dp[n-1];
        return (len>0 && n%(n-len)==0);       
    }
};

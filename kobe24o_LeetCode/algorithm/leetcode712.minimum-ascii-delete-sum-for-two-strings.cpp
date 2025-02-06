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
    int minimumDeleteSum(string s1, string s2) {
    	int i, j, n1 = s1.size(), n2 = s2.size();
		vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));    	
		for(i = 0; i < n2; i++) 
			dp[0][i+1] = dp[0][i] + int(s2[i]);
		for(i = 0; i < n1; i++) 
			dp[i+1][0] = dp[i][0] + int(s1[i]);
		for(i = 1; i <= n1; i++)
		{
			for(j = 1; j <= n2; j++)
			{
				if(s1[i-1] == s2[j-1])
					dp[i][j] = dp[i-1][j-1];
				else
				{
					dp[i][j] = min(dp[i][j-1]+int(s2[j-1]),min(dp[i-1][j]+int(s1[i-1]), dp[i-1][j-1]+int(s1[i-1]+s2[j-1])));
				}
			}
		}
		return dp[n1][n2];
    }
};
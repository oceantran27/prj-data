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
    int minSteps(int n) 
    {
        vector<int>dp(n+1,INT_MAX);  
        dp[1] = 0;
        for (int i=2; i<=n; i++)
        {
            for (int j=2; j<=i; j++)
            {
                if (i%j!=0) continue;
                int k = i/j;
                dp[i] = min(dp[i], dp[k]+1+j-1);
                break;
            }
        }
        return dp[n];
    }
};

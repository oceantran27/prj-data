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
    bool winnerSquareGame(int n) 
    {
        vector<int>dp(n+1);
        dp[0] = 0;
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j*j<=i; j++)
            {
                if (dp[i-j*j]==0)
                {
                    dp[i] = 1;
                    break;
                }
            }
        }
        return dp[n];

    }
};

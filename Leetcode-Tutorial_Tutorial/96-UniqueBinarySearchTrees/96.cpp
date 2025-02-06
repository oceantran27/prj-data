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
    int numTrees(int n) {
        //ȿʼ
        if(n==1||n==0)
            return 1;
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[1] = 1;
        dp[2] = 2;                         //Եߵ
        dp[0] = 1;

        for(int i = 3;i<=n;i++)            //ÿһdp[n]
        {
            for(int j = 1;j<=i;j++)         //в
            {
                dp[i] += dp[i-j]*dp[j-1];
            }
        }
        return dp[n];
    }
};

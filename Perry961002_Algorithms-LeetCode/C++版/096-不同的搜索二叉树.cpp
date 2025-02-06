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
    int dp[100] = {0};
    int numTrees(int n) {
         dp[0] = dp[1] = 1;
        if(n == 1) return 1;
        int i,j;
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                dp[i] +=dp[j-1]*dp[i-j];
            }
        }
        return dp[n];
    }
};
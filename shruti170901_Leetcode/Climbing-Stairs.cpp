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
    int climbStairs(int n) {
        int dp[10000];

    dp[0]=1;
    dp[1]=1;
    int i;
        
    for(i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return(dp[n]);
        
    }
};
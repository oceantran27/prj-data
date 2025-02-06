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
    int numSquares(int n) {
      vector<int> dp(n+1,1000000);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j*j<=i;j++) dp[i]=min(dp[i],1+dp[i-j*j]);
    }
    return dp[n];  
    }
};

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
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        int count = 1;
        while(count*count <= n) {
            int sq = count*count;
            for(int i = sq; i < n+1; i++) {
                dp[i] = min(dp[i-sq] + 1,dp[i]);
            }
            count++;
        }
        return dp[n];
    }
};
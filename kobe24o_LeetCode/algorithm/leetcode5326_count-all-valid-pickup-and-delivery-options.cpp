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
    int countOrders(int n) {
        vector<long> dp(n+1,0);
        dp[1] = 1;
        for(int i = 2; i <= n; ++i)
        {
            dp[i] = dp[i-1]*(2*i-1)*i%1000000007;
        }
        return dp[n];
    }
};
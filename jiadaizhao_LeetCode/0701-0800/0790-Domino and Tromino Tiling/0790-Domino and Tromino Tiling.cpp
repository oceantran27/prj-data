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
    int numTilings(int N) {
        int MOD = 1000000007;
        int dp[1001];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        if (N <= 2) return dp[N];
        for (int i = 3; i <= N; ++i) {
            dp[i] = ((dp[i - 1] + dp[i - 1]) % MOD + dp[i - 3]) % MOD;
        }
        return dp[N];
    }
};

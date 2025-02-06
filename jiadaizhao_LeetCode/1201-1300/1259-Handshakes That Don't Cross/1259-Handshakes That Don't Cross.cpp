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
    int numberOfWays(int num_people) {
        int n = num_people / 2;
        vector<long> dp(1 + n);
        dp[0] = 1;
        int MOD = 1e9 + 7;
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                dp[i] = (dp[i] + dp[j] * dp[i - 1 - j]) % MOD;
            }
        }
        return dp[n];
    }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(n)

// knapsack dp
class Solution {
public:
    int numberOfWays(int n, int x) {
        static const int MOD = 1e9 + 7;

        vector<int> dp(n + 1);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            const int i_pow_x = pow(i, x);
            if (i_pow_x > n) {
                break;
            }
            for (int j = n; j >= i_pow_x; --j) {
                dp[j] = (dp[j] + dp[j - i_pow_x]) % MOD;
            }
        }
        return dp.back();
    }
};

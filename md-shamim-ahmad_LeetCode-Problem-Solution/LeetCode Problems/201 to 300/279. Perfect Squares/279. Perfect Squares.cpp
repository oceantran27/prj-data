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
    vector<int> dp;
    const int inf = 10e4 + 7;

public:
    int numSquares(int n) {
        dp.assign(n + 1, inf);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j * j <= i; j++)
                dp[i] = min(dp[i], 1 + dp[i - j * j]);
        }
        return dp[n];
    }
};
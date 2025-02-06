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
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        
        vector<vector<int>> dp(2 + n, vector<int>(2 + n));
        
        for (int l = 1; l <= n; ++l) {
            for (int i = 1; i <= n - l + 1; ++i) {
                int j = i + l - 1;
                for (int k = i; k <= j; ++k) {
                    int left = (i > 1) ? nums[i - 2] : 1;
                    int right = (j < n) ? nums[j] : 1;
                    dp[i][j] = max(dp[i][j], dp[i][k - 1] + dp[k + 1][j] + left * nums[k - 1] * right);
                }
            }
        }
        
        return dp[1][n];
    }
};

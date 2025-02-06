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
    int findTargetSumWays(vector<int>& nums, int S) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (S < -sum || S > sum) {
            return 0;
        }
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] *= 2;
        }
        
        vector<int> dp(1 + sum + S);
        dp[0] = 1;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = sum + S; j >= nums[i]; --j) {
                dp[j] += dp[j - nums[i]];
            }
        }
        
        return dp[sum + S];
    }
};

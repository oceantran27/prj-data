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
    //动态规划：
    //dp[i]表示和为i的组合数
    // dp[i] = sum( dp[i - nums[j] ] ),  if(i - nums[j] >= 0)
    int combinationSum4(vector<int>& nums, int target) {
        if(nums.size() == 0)
            return 0;
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for(int i=1;i<=target;i++)
        {
            for(auto val : nums)
            {
                if(i >= val)
                    dp[i] += dp[i - val];
            }
        }
        return dp[target];
    }
};
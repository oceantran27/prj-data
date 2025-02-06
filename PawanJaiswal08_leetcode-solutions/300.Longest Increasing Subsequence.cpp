#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp;
        dp.push_back(nums[0]);
        for (int i = 0; i < n; i++)
        {
            if (dp.back() < nums[i])
                dp.push_back(nums[i]);
            else
            {
                int pos = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
                dp[pos] = nums[i];
            }
        }
        // for(auto x:dp)cout<<x<<" ";
        return dp.size();
    }
};
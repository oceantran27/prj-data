#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/

class Solution {
 public:
  int maximumJumps(vector<int>& nums, long long target) {
    int n = nums.size();
    vector<int> dp(n, -1);
    dp[n - 1] = 0;
    for (int i = n - 2; i >= 0; --i)
      for (int j = i + 1; j < n; ++j)
        if (dp[j] >= 0 and nums[j] >= nums[i] - target and
            nums[j] <= nums[i] + target)
          dp[i] = max(dp[i], dp[j] + 1);
    return dp[0];
  }
};

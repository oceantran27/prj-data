#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-arithmetic-subsequence/

class Solution {
 public:
  // ChatGPT solution
  int longestArithSeqLength(vector<int>& nums) {
    int n = nums.size();
    std::vector<std::unordered_map<int, int>> dp(n);
    // dp[i][diff] stores the length of the arithmetic subsequence
    // ending at index i with difference diff
    int maxLen = 0;

    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        int diff = nums[i] - nums[j];
        dp[i][diff] = dp[j].count(diff) ? dp[j][diff] + 1 : 2;
        // If the difference already exists in dp[j], add 1 to the length;
        // otherwise, set the length as 2
        maxLen = std::max(maxLen, dp[i][diff]);
      }
    }

    return maxLen;
  }
};

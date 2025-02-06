#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-increasing-subsequence

class Solution {
 public:
  int lengthOfLIS(vector<int>& nums) {
    int N = nums.size();
    vector<int> DP(N);

    int ret = 0;
    for (int i = 0; i < N; ++i) {
      DP[i] = 1;
      for (int j = 0; j < i; ++j)
        if (nums[j] < nums[i]) DP[i] = max(DP[i], DP[j] + 1);
      ret = max(ret, DP[i]);
    }
    return ret;
  }
};

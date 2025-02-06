#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/house-robber

class Solution {
 public:
  int rob(vector<int>& nums) {
    for (int i = 1, N = nums.size(); i < N; ++i) {
      nums[i] = max(nums[i - 1], nums[i] + ((i > 1) ? nums[i - 2] : 0));
    }
    return nums.empty() ? 0 : nums.back();
  }
};

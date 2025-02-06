#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-subarray

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int best = nums[0], minprefix = 0, cum = 0;
    for (int n : nums) {
      cum += n;
      best = std::max(best, cum - minprefix);
      minprefix = std::min(cum, minprefix);
    }
    return best;
  }
};

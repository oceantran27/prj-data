#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-alternating-subarray/

class Solution {
 public:
  int alternatingSubarray(vector<int>& nums) {
    int best{-1};
    for (int i = 1, start = 0, n = nums.size(); i < n; ++i) {
      if ((start ^ i) & 1) {
        if (nums[i] == nums[start] + 1)
          best = max(best, i - start + 1);
        else
          start = i;
      } else {
        if (nums[i] == nums[start])
          best = max(best, i - start + 1);
        else if (nums[i] == nums[i - 1] + 1)
          best = max(best, i - (start = i - 1) + 1);
        else
          start = i;
      }
    }
    return best;
  }
};

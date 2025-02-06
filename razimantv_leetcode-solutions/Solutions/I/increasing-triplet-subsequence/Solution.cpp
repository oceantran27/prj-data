#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
 public:
  bool increasingTriplet(vector<int>& nums) {
    for (int i = 0, n = nums.size(), s = INT_MAX, s2 = s; i < n; ++i) {
      if (s2 < nums[i]) {
        return true;
      } else if (s < nums[i]) {
        s2 = nums[i];
      } else
        s = nums[i];
    }
    return false;
  }
};

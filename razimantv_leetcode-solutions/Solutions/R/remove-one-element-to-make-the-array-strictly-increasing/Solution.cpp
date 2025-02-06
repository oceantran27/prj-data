#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing

class Solution {
 public:
  bool is(vector<int>& nums) {
    for (int i = 1, n = nums.size(); i < n; ++i)
      if (nums[i] <= nums[i - 1]) return false;
    return true;
  }
  bool canBeIncreasing(vector<int>& nums) {
    for (int i = 0, n = nums.size(); i < n; ++i) {
      vector<int> cur;
      for (int j = 0; j < n; ++j)
        if (j != i) cur.push_back(nums[j]);
      if (is(cur)) return true;
    }
    return false;
  }
};

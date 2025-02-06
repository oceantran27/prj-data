#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
 public:
  int search(vector<int>& nums, int target) {
    if (nums.empty()) return -1;

    int N = nums.size(), start = 0, end = N;
    while (end - start > 1) {
      int mid = (start + end) >> 1;
      if (nums[mid] >= nums[0])
        start = mid;
      else
        end = mid;
    }

    if (target < nums[0]) {
      auto it = lower_bound(nums.begin() + end, nums.end(), target);
      if (it == nums.end() or *it != target)
        return -1;
      else
        return it - nums.begin();
    } else {
      auto it = lower_bound(nums.begin(), nums.begin() + end, target);
      if (it - nums.begin() >= end or *it != target)
        return -1;
      else
        return it - nums.begin();
    }
  }
};

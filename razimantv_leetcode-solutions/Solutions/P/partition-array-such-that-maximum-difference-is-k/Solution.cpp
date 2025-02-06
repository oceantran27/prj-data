#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k

class Solution {
 public:
  int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int ret = 0, n = nums.size();
    for (int i = 0; i < n;) {
      ++ret;
      i = upper_bound(nums.begin() + i, nums.end(), nums[i] + k) - nums.begin();
    }
    return ret;
  }
};

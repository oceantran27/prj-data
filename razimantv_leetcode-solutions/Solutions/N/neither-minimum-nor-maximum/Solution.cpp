#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/neither-minimum-nor-maximum/

class Solution {
 public:
  int findNonMinOrMax(vector<int>& nums) {
    if (nums.size() < 3) return -1;
    nth_element(nums.begin(), nums.begin() + 1, nums.end());
    return nums[1];
  }
};

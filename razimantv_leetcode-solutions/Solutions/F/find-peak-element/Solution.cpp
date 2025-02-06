#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-peak-element

class Solution {
 public:
  int findPeakElement(vector<int>& nums) {
    for (int i = 0, n = nums.size(); i < n - 1; ++i)
      if (nums[i] > nums[i + 1]) return i;
    return nums.size() - 1;
  }
};

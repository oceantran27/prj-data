#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
 public:
  int arithmeticTriplets(vector<int>& nums, int diff) {
    int n = nums.size(), ret{};
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < i; ++j)
        for (int k = 0; k < j; ++k)
          if (nums[i] - nums[j] == diff and nums[j] - nums[k] == diff) ++ret;
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/

class Solution {
 public:
  int sumIndicesWithKSetBits(vector<int>& nums, int k) {
    int ret{};
    for (int i = 0, n = nums.size(); i < n; ++i)
      if (__builtin_popcount(i) == k) ret += nums[i];
    return ret;
  }
};

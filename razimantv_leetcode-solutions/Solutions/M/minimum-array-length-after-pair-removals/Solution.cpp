#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-array-length-after-pair-removals/

class Solution {
 public:
  int minLengthAfterRemovals(vector<int>& nums) {
    int n = nums.size(), lmax{};
    for (int i = 0, cur = 0; i < n; ++i) {
      if (i and nums[i] != nums[i - 1]) cur = 0;
      lmax = max(lmax, ++cur);
    }
    return (2 * lmax <= n) ? (n & 1) : (2 * lmax - n);
  }
};

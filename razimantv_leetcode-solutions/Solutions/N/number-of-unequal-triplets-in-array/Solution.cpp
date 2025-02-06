#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-unequal-triplets-in-array/

class Solution {
 public:
  int unequalTriplets(vector<int>& nums) {
    int n = nums.size();
    int ret{};
    for (int a : nums)
      for (int b : nums)
        for (int c : nums)
          if (a != b and b != c and a != c) ++ret;
    return ret / 6;
  }
};

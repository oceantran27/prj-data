#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-array-is-good/

class Solution {
 public:
  bool isGood(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0, n = nums.size(); i < n; ++i)
      if (nums[i] != i + 1 - (i == n - 1)) return false;
    return true;
  }
};

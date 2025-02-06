#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/

class Solution {
 public:
  int minimumRightShifts(vector<int>& nums) {
    int ret = 0, bad = 0;
    for (int i = 0, n = nums.size(); i < n; ++i) {
      if (nums[i] > nums[(i + 1) % n]) {
        if (bad) {
          return -1;
        } else {
          ret = i;
          bad = 1;
        }
      }
    }
    return nums.size() - ret - 1;
  }
};

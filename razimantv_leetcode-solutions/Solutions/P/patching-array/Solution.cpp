#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/patching-array

class Solution {
 public:
  int minPatches(vector<int>& nums, int n) {
    int ret = 0;
    for (long long lim = 0, i = 0, m = nums.size(); lim < n;) {
      if (i < m and nums[i] <= lim + 1)
        lim += nums[i++];
      else
        ++ret, lim = 2 * lim + 1;
    }
    return ret;
  }
};

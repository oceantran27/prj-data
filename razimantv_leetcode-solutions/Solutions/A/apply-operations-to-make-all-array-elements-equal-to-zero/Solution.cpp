#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/apply-operations-to-make-all-array-elements-equal-to-zero/

class Solution {
 public:
  bool checkArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> pref(n + 1);
    for (int i = 0, psum = 0; i < n; ++i) {
      psum += pref[i];
      nums[i] -= psum;
      if (nums[i] < 0 or (nums[i] and i + k > n)) return false;
      psum += nums[i];
      pref[min(i + k, n)] -= nums[i];
    }
    return true;
  }
};

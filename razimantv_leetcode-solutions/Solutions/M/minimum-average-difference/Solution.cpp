#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-average-difference/

class Solution {
 public:
  int minimumAverageDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n + 1), right(n + 1);
    for (long long i = 0, j = n - 1, lsum = 0, rsum = 0; i < n; ++i, --j) {
      left[i] = (lsum += nums[i]) / (i + 1);
      right[j] = (rsum += nums[j]) / (i + 1);
    }

    int best = INT_MAX, ret = 0;
    for (int i = 0; i < n; ++i) {
      int cur = abs(left[i] - right[i + 1]);
      if (cur < best) best = cur, ret = i;
    }
    return ret;
  }
};

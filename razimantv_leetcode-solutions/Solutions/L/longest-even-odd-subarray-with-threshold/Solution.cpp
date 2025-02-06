#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-even-odd-subarray-with-threshold/

class Solution {
 public:
  int longestAlternatingSubarray(vector<int>& nums, int threshold) {
    int ret{0};
    for (int i = 0, n = nums.size(), start = -1; i < n; ++i) {
      if (nums[i] > threshold)
        start = -1;
      else if (start != -1) {
        if ((nums[i] ^ nums[i - 1]) & 1)
          ret = max(ret, i - start + 1);
        else if (!(nums[i] & 1))
          start = i;
        else
          start = -1;
      } else if (!(nums[i] & 1)) {
        ret = max(ret, 1);
        start = i;
      }
    }
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/valid-triangle-number

class Solution {
 public:
  int triangleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int ret = 0;
    for (int i = 0, n = nums.size(); i < n; ++i)
      for (int j = i + 1, k = j + 1; j < n; ++j) {
        while (k <= j or (k < n and nums[i] + nums[j] > nums[k])) ++k;
        ret += k - j - 1;
      }
    return ret;
  }
};

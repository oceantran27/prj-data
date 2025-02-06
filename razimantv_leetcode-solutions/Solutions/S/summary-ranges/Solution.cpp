#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/summary-ranges

class Solution {
 public:
  vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ret;
    for (int i = 0, j, N = nums.size(); i < N; i = j) {
      for (j = i + 1; j < N and nums[j] == nums[j - 1] + 1; ++j)
        ;
      if (j == i + 1)
        ret.push_back(to_string(nums[i]));
      else
        ret.push_back(to_string(nums[i]) + "->" + to_string(nums[j - 1]));
    }
    return ret;
  }
};

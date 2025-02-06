#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shuffle-the-array/

class Solution {
 public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> ret;
    for (int i = 0; i < n; ++i) {
      ret.push_back(nums[i]);
      ret.push_back(nums[n + i]);
    }
    return ret;
  }
};

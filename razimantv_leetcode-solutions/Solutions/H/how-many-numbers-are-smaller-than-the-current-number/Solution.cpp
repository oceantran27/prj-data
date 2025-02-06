#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
 public:
  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    auto ret = nums;
    for (auto& x : ret) {
      int cur = 0;
      for (int y : nums)
        if (y < x) ++cur;
      x = cur;
    }
    return ret;
  }
};

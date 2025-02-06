#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-distance-to-the-target-element

class Solution {
 public:
  int getMinDistance(vector<int>& nums, int target, int start) {
    int n = nums.size(), best = n;
    for (int i = 0; i < n; ++i)
      if (nums[i] == target) best = min(best, abs(start - i));
    return best;
  }
};

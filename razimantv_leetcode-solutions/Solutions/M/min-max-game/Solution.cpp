#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/min-max-game

class Solution {
 public:
  int minMaxGame(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    vector<int> v(n >> 1);
    for (int i = 0; 2 * i < n; ++i)
      if (i & 1)
        v[i] = max(nums[2 * i], nums[2 * i + 1]);
      else
        v[i] = min(nums[2 * i], nums[2 * i + 1]);
    return minMaxGame(v);
  }
};

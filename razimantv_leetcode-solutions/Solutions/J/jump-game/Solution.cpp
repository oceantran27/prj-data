#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/jump-game

class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int N = nums.size();
    int lim = nums[0];
    if (lim >= N - 1) return true;
    for (int i = 1; i <= lim; ++i) {
      if ((lim = max(lim, i + nums[i])) >= N - 1) return true;
    }
    return false;
  }
};

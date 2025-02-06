#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/wiggle-subsequence

class Solution {
 public:
  int wiggleMaxLength(vector<int>& nums) {
    int N = nums.size(), up = (N > 0), down = up;

    for (int i = 1; i < N; ++i) {
      if (nums[i] > nums[i - 1])
        up = down + 1;
      else if (nums[i] < nums[i - 1])
        down = up + 1;
    }
    return max(up, down);
  }
};

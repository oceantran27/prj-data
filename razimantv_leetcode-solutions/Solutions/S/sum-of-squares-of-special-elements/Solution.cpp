#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-squares-of-special-elements/

class Solution {
 public:
  int sumOfSquares(vector<int>& nums) {
    int ret{};
    for (int n = nums.size(), i = 0; i < n; ++i)
      if (n % (i + 1) == 0) ret += nums[i] * nums[i];
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/missing-number

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int ret = 0;
    for (int x : nums) ret ^= x;
    for (int i = 1, n = nums.size(); i <= n; ++i) ret ^= i;
    return ret;
  }
};

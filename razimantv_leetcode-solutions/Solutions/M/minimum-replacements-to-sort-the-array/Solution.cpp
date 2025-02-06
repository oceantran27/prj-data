#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-replacements-to-sort-the-array

class Solution {
 public:
  long long minimumReplacement(vector<int>& nums) {
    long long ret = 0;
    for (int i = nums.size() - 2; i >= 0; --i) {
      int &x = nums[i], &y = nums[i + 1], add = (x - 1) / y;
      ret += add;
      x = x / (add + 1);
    }
    return ret;
  }
};

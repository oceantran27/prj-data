#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/left-and-right-sum-differences/

class Solution {
 public:
  vector<int> leftRigthDifference(vector<int>& nums) {
    int n = nums.size();
    vector<int> ret(n);
    for (int i = 1, pref = 0; i < n; ++i) ret[i] = (pref += nums[i - 1]);
    for (int i = n - 2, pref = 0; i >= 0; --i)
      ret[i] = abs(ret[i] - (pref += nums[i + 1]));
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/

class Solution {
 public:
  vector<long long> findPrefixScore(vector<int>& nums) {
    int n = nums.size();
    vector<long long> ret(n);
    ret[0] = nums[0] * 2;
    for (int i = 1; i < n; ++i) {
      int cur = nums[i];
      nums[i] = max(nums[i - 1], cur);
      ret[i] = ret[i - 1] + cur + nums[i];
    }
    return ret;
  }
};

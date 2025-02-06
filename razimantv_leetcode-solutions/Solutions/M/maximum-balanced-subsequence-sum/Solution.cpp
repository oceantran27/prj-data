#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-balanced-subsequence-sum/

class Solution {
 public:
  long long maxBalancedSubsequenceSum(vector<int>& nums) {
    map<long long, long long> best;
    long long ret{nums[0]};
    for (int i = 0, n = nums.size(); i < n; ++i) {
      long long x = nums[i], y = x - i, cur;
      auto mit = best.upper_bound(y);
      if (mit == best.begin()) {
        cur = best[y] = x;
      } else {
        cur = best[y] = max(0ll, (--mit)->second) + x;
      }
      ret = max(ret, cur);
      mit = best.upper_bound(y);

      while (mit != best.end() and mit->second <= cur) best.erase(mit++);
    }
    return ret;
  }
};

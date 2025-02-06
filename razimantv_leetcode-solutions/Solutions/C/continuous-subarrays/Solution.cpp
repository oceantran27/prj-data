#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/continuous-subarrays/

class Solution {
 public:
  long long continuousSubarrays(vector<int>& nums) {
    map<int, int> cnt;
    long long ret{};
    for (int l = 0, r = 0, n = nums.size(); r < n; ++r) {
      ++cnt[nums[r]];
      while (cnt.rbegin()->first - cnt.begin()->first > 2) {
        if (!--cnt[nums[l]]) cnt.erase(nums[l]);
        ++l;
      }
      ret += r - l + 1;
    }
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-subarrays-with-median-k/

class Solution {
 public:
  int countSubarrays(vector<int>& nums, int k) {
    unordered_map<int, int> cnt;
    cnt[0] = 1;

    int i = 0, n = nums.size(), pref = 0;
    for (; i < n and nums[i] != k; ++i) {
      if (nums[i] < k)
        --pref;
      else
        ++pref;
      ++cnt[pref];
    }

    int ret{};
    for (; i < n; ++i) {
      if (nums[i] < k)
        --pref;
      else if (nums[i] > k)
        ++pref;
      ret += cnt[pref] + cnt[pref - 1];
    }
    return ret;
  }
};

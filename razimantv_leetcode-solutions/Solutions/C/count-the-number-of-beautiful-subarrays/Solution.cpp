#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-the-number-of-beautiful-subarrays/

class Solution {
 public:
  long long beautifulSubarrays(vector<int>& nums) {
    unordered_map<int, int> cnt;
    cnt[0] = 1;
    long long ret{};
    for (int i = 0, n = nums.size(), pref = 0; i < n; ++i)
      ret += cnt[pref ^= nums[i]]++;
    return ret;
  }
};

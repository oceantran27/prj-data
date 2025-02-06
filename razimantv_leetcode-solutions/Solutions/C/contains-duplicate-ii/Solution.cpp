#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_map<int, int> cnt;
    for (int i = 0, n = nums.size(); i < n; ++i) {
      if (cnt[nums[i]]++)
        return true;
      if (i >= k)
        --cnt[nums[i - k]];
    }
    return false;
  }
};

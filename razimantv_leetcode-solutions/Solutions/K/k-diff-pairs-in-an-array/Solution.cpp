#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/k-diff-pairs-in-an-array

class Solution {
 public:
  int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    unordered_set<int> seen;
    int ans{0};
    if (k == 0) {
      for (int i = 0; i < nums.size(); ++i)
        if ((i > 0 and nums[i] == nums[i - 1]) and
            !(i > 1 and nums[i] == nums[i - 2]))
          ++ans;
    } else {
      for (int n : nums) {
        if (seen.count(n)) continue;
        if (seen.count(n - k)) ++ans;
        seen.insert(n);
      }
    }
    return ans;
  }
};

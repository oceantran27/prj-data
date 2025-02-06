#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array

class Solution {
 public:
  int findMaximumXOR(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int best = 0;
    for (int n : nums) {
      int cur = 0;
      for (int b = 30, p = 0; b >= 0; --b) {
        p |= (1 << b);
        if (!(n & (1 << b))) cur ^= (1 << b);
        auto elem = lower_bound(nums.begin(), nums.end(), cur);
        if (elem == nums.end() or ((*elem) ^ cur) & p) cur ^= (1 << b);
      }
      best = max(best, cur ^ n);
    }
    return best;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-
class Solution {
 public:
  int minOperations(vector<int>& nums) {
    int n = nums.size();
    if (*min_element(nums.begin(), nums.end()) == 1) {
      int ret{};
      for (int x : nums) ret += x > 1;
      return ret;
    }
    for (int L = 2; L <= n; ++L) {
      for (int i = 0, j = i + L - 1; j < n; ++i, ++j) {
        int g{};
        for (int k = i; k <= j; ++k) g = __gcd(g, nums[k]);
        if (g == 1) return L + n - 2;
      }
    }
    return -1;
  }
};

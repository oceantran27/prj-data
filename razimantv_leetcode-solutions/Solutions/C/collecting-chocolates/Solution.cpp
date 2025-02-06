#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/collecting-chocolates/

class Solution {
 public:
  long long minCost(vector<int>& nums, long long x) {
    long long ret(1ll << 62);
    int n = nums.size();
    vector<long long> best(n);
    for (int i = 0; i < n; ++i) best[i] = x * i;
    for (int i = 0; i < n; ++i) {
      for (int j = 0, k = i, good = nums[i]; j < n; ++j, ++k) {
        if (k == n) k = 0;
        best[j] += (good = min(good, nums[k]));
      }
    }
    return *min_element(best.begin(), best.end());
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-element-sum-of-a-complete-subset-of-indices/

class Solution {
 public:
  long long maximumSum(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n + 1);
    iota(left.begin(), left.end(), 0);
    for (int i = 2; i * i <= n; ++i) {
      if (left[i] != i) continue;
      for (int sq = i * i, j = sq; j <= n; j += sq) {
        while (left[j] % sq == 0) left[j] /= sq;
      }
    }

    unordered_map<int, long long> tot;
    long long ret{};
    for (int i = 0; i < n; ++i) {
      ret = max(ret, tot[left[i + 1]] += nums[i]);
    }
    return ret;
  }
};

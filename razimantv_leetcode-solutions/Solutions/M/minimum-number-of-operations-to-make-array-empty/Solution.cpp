#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/

class Solution {
 public:
  int minOperations(vector<int>& nums) {
    unordered_map<int, int> cnt;
    for (int x : nums) ++cnt[x];
    int ret{};
    for (auto [k, v] : cnt) {
      if (v == 1) return -1;
      ret += (v + 2) / 3;
    }
    return ret;
  }
};

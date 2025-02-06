#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/max-pair-sum-in-an-array

class Solution {
 public:
  int maxSum(vector<int>& nums) {
    unordered_map<char, vector<int>> group;
    for (int x : nums) {
      auto s = to_string(x);
      char c = *max_element(s.begin(), s.end());
      group[c].push_back(x);
    }

    int ret{-1};
    for (auto [k, v] : group) {
      if (v.size() < 2) continue;
      sort(v.begin(), v.end(), greater<int>());
      ret = max(ret, v[0] + v[1]);
    }
    return ret;
  }
};

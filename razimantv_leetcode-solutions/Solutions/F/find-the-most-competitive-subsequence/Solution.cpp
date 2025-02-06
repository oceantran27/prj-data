#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-most-competitive-subsequence

class Solution {
 public:
  vector<int> mostCompetitive(vector<int>& nums, int k) {
    set<pair<int, int>> s;
    vector<int> ret;
    for (int i = 0, prev = -1, n = nums.size(); i < n; ++i) {
      s.insert({nums[i], i});
      if (i + k < n) continue;
      while (1) {
        auto [val, pos] = *s.begin();
        s.erase(s.begin());
        if (pos > prev) {
          ret.push_back(val);
          prev = pos;
          break;
        }
      }
    }
    return ret;
  }
};

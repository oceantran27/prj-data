#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/combination-sum

class Solution {
 public:
  vector<vector<int>> combinationSum(vector<int>& candidates, int target,
                                     int pos = 0) {
    if (pos == candidates.size()) return {};

    auto ret = combinationSum(candidates, target, pos + 1);
    if (target == candidates[pos])
      ret.push_back({candidates[pos]});
    else if (target > candidates[pos]) {
      auto cur = combinationSum(candidates, target - candidates[pos], pos);
      for (auto& v : cur) {
        v.push_back(candidates[pos]);
        ret.push_back(v);
      };
    }
    return ret;
  }
};

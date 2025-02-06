#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/subsets-ii

class Solution {
 public:
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    set<vector<int>> s;
    for (int i = 0; i < (1 << n); ++i) {
      vector<int> cur;
      for (int j = 0; j < n; ++j)
        if (i & (1 << j)) cur.push_back(nums[j]);
      s.insert(cur);
    }

    vector<vector<int>> ret(s.begin(), s.end());
    return ret;
  }
};

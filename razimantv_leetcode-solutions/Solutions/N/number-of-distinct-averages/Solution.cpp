#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-distinct-averages/

class Solution {
 public:
  int distinctAverages(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    unordered_set<int> s;
    for (int i = 0, j = n - 1; i < j; ++i, --j) s.insert(nums[i] + nums[j]);
    return s.size();
  }
};

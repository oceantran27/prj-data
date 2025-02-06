#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-gap

class Solution {
 public:
  int maximumGap(vector<int>& nums) {
    int N = nums.size();
    if (N == 1) return 0;
    sort(nums.begin(), nums.end());
    int best = 0;
    for (int i = 1; i < N; ++i) best = max(best, nums[i] - nums[i - 1]);
    return best;
  }
};

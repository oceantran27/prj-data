#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii

class Solution {
 public:
  int minMoves2(vector<int>& nums) {
    int N = nums.size(), M = N >> 1;
    nth_element(nums.begin(), nums.begin() + M, nums.end());

    int best = 0;
    for (int i = 0; i < M; ++i) best += nums[M] - nums[i];
    for (int i = M + 1; i < N; ++i) best += nums[i] - nums[M];
    return best;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/next-permutation

class Solution {
 public:
  void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(), nums.end());
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/rotate-array

class Solution {
 public:
  void rotate(vector<int>& nums, int k) {
    int N = nums.size();
    k %= N;
    if (k == 0) return;
    k = N - k;
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
  }
};

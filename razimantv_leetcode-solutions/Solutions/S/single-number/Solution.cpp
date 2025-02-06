#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/single-number

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    return std::accumulate(nums.begin(), nums.end(), 0,
                           [](int a, int b) { return a ^ b; });
  }
};

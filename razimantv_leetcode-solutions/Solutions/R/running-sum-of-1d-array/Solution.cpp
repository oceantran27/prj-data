#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
 public:
  vector<int> runningSum(vector<int>& nums) {
    int prev = 0;
    for (int& n : nums) {
      n += prev;
      prev = n;
    }
    return nums;
  }
};

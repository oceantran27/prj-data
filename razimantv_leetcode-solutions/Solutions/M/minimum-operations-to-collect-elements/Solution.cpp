#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-collect-elements/

class Solution {
 public:
  int minOperations(vector<int>& nums, int k) {
    unordered_set<int> seen;
    for (int n = nums.size(), i = n - 1; i >= 0; --i) {
      if (nums[i] <= k) seen.insert(nums[i]);
      if (seen.size() == k) return n - i;
    }
    return -1;
  }
};

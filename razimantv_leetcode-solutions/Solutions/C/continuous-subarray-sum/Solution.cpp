#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/continuous-subarray-sum/

class Solution {
 public:
  bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_set<long long> seen;
    long long prev{}, cur{};
    for (int x : nums) {
      cur = (cur + x) % k;
      if (seen.count(cur)) return true;
      seen.insert(prev);
      prev = cur;
    }
    return false;
  }
};

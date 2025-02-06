#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-alternating-subsequence-sum

class Solution {
 public:
  long long maxAlternatingSum(vector<int>& nums) {
    long long odd = nums[0], even = 0;
    for (int i = 1, n = nums.size(); i < n; ++i) {
      long long newodd = max(odd, even + nums[i]);
      long long neweven = max(even, odd - nums[i]);
      odd = newodd;
      even = neweven;
    }
    return max(odd, even);
  }
};

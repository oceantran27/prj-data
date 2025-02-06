#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/continuous-subarray-sum
// Author: github.com/lzl124631x
// Time: O(N^2)
// Space: O(1)
class Solution {
public:
  bool checkSubarraySum(vector<int>& nums, int k) {
    for (int i = 0; i < nums.size(); ++i) {
      int sum = nums[i];
      for (int j = i + 1; j < nums.size(); ++j) {
        sum += nums[j];
        if ((!k && !sum) || (k && sum % k == 0)) return true;
      }
    }
    return false;
  }
};
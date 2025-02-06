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
// Time: O(N)
// Space: O(K)
class Solution {
public:
  bool checkSubarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> m {{ 0, -1 }};
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
      sum += nums[i];
      if (k) sum %= k;
      if (m.count(sum)) {
        if (m[sum] < i - 1) return true;
      } else m[sum] = i;
    }
    return false;
  }
};
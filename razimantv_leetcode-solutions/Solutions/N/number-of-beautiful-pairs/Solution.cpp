#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-beautiful-pairs/

class Solution {
 public:
  int countBeautifulPairs(vector<int>& nums) {
    int ret{};
    for (int i = 0, n = nums.size(); i < n; ++i) {
      int d1 = to_string(nums[i])[0] - '0';
      for (int j = i + 1; j < n; ++j)
        if (__gcd(d1, nums[j] % 10) == 1) ++ret;
    }
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
 public:
  // ChatGPT solution
  int minSubArrayLen(int target, vector<int>& nums) {
    int left = 0, right = 0;
    int sum = 0;
    int minLength = std::numeric_limits<int>::max();

    while (right < nums.size()) {
      sum += nums[right];

      while (sum >= target) {
        minLength = std::min(minLength, right - left + 1);
        sum -= nums[left];
        left++;
      }

      right++;
    }

    return (minLength == std::numeric_limits<int>::max()) ? 0 : minLength;
  }
};

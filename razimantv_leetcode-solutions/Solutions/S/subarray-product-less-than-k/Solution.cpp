#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/subarray-product-less-than-k

class Solution {
 public:
  int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int ans = 0, N = nums.size();

    for (int i = 0, j = 0, cur = nums[0]; i < N; cur /= nums[i++]) {
      if (j < i) cur = nums[j = i];
      while (j < N and cur < k) {
        if (++j < N) cur *= nums[j];
      }
      ans += j - i;
    }
    return ans;
  }
};

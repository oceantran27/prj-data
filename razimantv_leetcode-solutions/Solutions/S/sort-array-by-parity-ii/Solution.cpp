#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sort-array-by-parity-ii

class Solution {
 public:
  vector<int> sortArrayByParityII(vector<int>& nums) {
    for (int i = 0, j = 1, n = nums.size(); i < n and j < n;) {
      if (!(nums[i] & 1))
        i += 2;
      else if (nums[j] & 1)
        j += 2;
      else {
        swap(nums[i], nums[j]);
        j += 2;
        i += 2;
      }
    }
    return nums;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/single-element-in-a-sorted-array

class Solution {
 public:
  int singleNonDuplicate(vector<int>& nums) {
    int N = nums.size() / 2;
    int start = -1, end = N;
    while (end - start > 1) {
      int mid = (end + start) >> 1;
      if (nums[mid * 2] == nums[mid * 2 + 1])
        start = mid;
      else
        end = mid;
    }
    return nums[2 * end];
  }
};

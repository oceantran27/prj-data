#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sort-colors

class Solution {
 public:
  void sortColors(vector<int>& nums) {
    for (int i = 0, j = 0, k = nums.size(); j < k;) {
      if (nums[j] == 0) {
        swap(nums[i++], nums[j++]);
      } else if (nums[j] == 2) {
        swap(nums[j], nums[--k]);
      } else {
        j++;
      }
    }
  }
};

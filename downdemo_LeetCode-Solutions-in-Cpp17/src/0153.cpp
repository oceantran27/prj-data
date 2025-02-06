#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  int findMin(vector<int>& nums) {
    int l = 1;
    int r = nums.size();
    while (l < r) {
      int m = l + (r - l) / 2;
      if (nums[m] < nums[0]) {
        r = m;
      } else {
        l = m + 1;
      }
    }
    return l != nums.size() ? nums[l] : nums[0];
  }
};

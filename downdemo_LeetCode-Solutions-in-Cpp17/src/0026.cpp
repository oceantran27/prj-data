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
  int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
      return 0;
    }
    int l = 0;
    for (int r = 1; r < nums.size(); ++r) {
      if (nums[l] != nums[r]) {
        ++l;
        if (l < r) {
          nums[l] = nums[r];
        }
      }
    }
    return l + 1;
  }
};

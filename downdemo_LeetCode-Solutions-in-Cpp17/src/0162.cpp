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
  int findPeakElement(vector<int>& nums) {
    int l = 0;
    int r = nums.size();
    while (l < r) {
      int m = l + (r - l) / 2;
      if (m > 0 && nums[m] < nums[m - 1]) {
        r = m;
      } else {
        l = m + 1;
      }
    }
    return l - 1;
  }
};

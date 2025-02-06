#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int cur = 0, mx = INT_MIN, n = nums.size();

    for (int i = 0; i < n; i++) {
      cur += nums[i];
      mx = max(mx, cur);
      if (cur < 0) {
        cur = 0;
      }
    }
    return mx;
  }
};

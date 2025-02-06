#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-product-subarray

class Solution {
 public:
  int maxProduct(vector<int>& nums) {
    int best = nums[0], m = 0, cur = 1;
    for (int n : nums) {
      best = max(best, n);
      if (n == 0)
        m = 0, cur = 1;
      else {
        cur *= n;
        if (cur > 0)
          best = max(best, cur);
        else if (m)
          best = max(best, cur / m);
        else
          m = cur;
      }
    }
    return best;
  }
};

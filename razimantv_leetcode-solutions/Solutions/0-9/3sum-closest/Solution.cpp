#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/3sum-closest

class Solution {
 public:
  int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int best = nums[0] + nums[1] + nums[2];

    for (int i = 0, n = nums.size(); i < n; ++i) {
      for (int j = i + 1, k = n - 1, cur; j <= k; ++j) {
        while (j < k and (cur = nums[i] + nums[j] + nums[k]) > target) --k;
        if (j < k and abs(cur - target) < abs(best - target)) best = cur;
        if (k < n - 1 and abs((cur = nums[i] + nums[j] + nums[k + 1]) -
                              target) < abs(best - target))
          best = cur;
        if (j == k) break;
      }
    }
    return best;
  }
};

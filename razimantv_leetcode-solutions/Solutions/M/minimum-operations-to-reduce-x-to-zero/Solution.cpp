#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero

class Solution {
 public:
  int minOperations(vector<int>& nums, int x) {
    x = std::accumulate(nums.begin(), nums.end(), (int)0) - x;
    if (x < 0)
      return -1;
    else if (x == 0)
      return nums.size();
    int best = -1, n = nums.size();
    for (int i = 0, j = 0, cur = 0; j < n; ++j) {
      cur += nums[j];
      while (cur > x) cur -= nums[i++];
      if (cur == x) best = max(best, j - i + 1);
    }
    return best == -1 ? -1 : (n - best);
  }
};

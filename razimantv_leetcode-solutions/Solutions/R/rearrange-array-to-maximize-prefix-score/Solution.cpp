#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/rearrange-array-to-maximize-prefix-score/

class Solution {
 public:
  int maxScore(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int ret{};
    long long pref{};
    for (int x : nums)
      if ((pref += x) > 0)
        ++ret;
      else
        break;
    return ret;
  }
};

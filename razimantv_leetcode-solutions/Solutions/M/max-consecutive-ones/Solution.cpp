#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/max-consecutive-ones

class Solution {
 public:
  int findMaxConsecutiveOnes(vector<int>& nums) {
    int best = 0, cur = 0;
    for (int n : nums)
      if (n)
        best = max(best, ++cur);
      else
        cur = 0;
    return best;
  }
};

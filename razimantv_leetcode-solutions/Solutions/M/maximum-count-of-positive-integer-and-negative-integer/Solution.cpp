#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

class Solution {
 public:
  int maximumCount(vector<int>& nums) {
    int p{}, n{};
    for (int x : nums)
      if (x > 0)
        ++p;
      else if (x < 0)
        ++n;
    return max(n, p);
  }
};

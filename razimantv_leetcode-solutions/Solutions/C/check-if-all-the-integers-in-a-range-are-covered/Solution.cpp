#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered

class Solution {
 public:
  bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    for (int i = left; i <= right; ++i) {
      bool flag = false;
      for (auto& v : ranges) {
        int l = v[0], r = v[1];
        if (l <= i and r >= i) flag = true;
      }
      if (!flag) return false;
    }
    return true;
  }
};

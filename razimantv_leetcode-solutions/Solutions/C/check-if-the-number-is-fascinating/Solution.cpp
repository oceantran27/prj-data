#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-if-the-number-is-fascinating/

class Solution {
 public:
  bool isFascinating(int n) {
    auto s = to_string(n) + to_string(2 * n) + to_string(3 * n);
    sort(s.begin(), s.end());
    for (int i = 1; i <= 9; ++i)
      if (s[i - 1] != '0' + i) return false;
    return s.size() == 9;
  }
};

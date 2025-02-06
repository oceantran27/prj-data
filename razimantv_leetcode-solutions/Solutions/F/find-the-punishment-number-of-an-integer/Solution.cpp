#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-punishment-number-of-an-integer/

class Solution {
 public:
  bool poss(string& s, int i, int target) {
    if (!s[i]) return !target;
    for (int pref{}; s[i]; ++i) {
      pref = pref * 10 + s[i] - '0';
      if (pref > target) break;
      if (poss(s, i + 1, target - pref)) return true;
    }
    return false;
  }
  int punishmentNumber(int n) {
    int ret{};
    for (int i = 1; i <= n; ++i) {
      auto s = to_string(i * i);
      if (poss(s, 0, i)) ret += i * i;
    }
    return ret;
  }
};

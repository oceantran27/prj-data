#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/happy-number

class Solution {
 public:
  int next(int n) {
    int ret = 0;
    while (n) {
      ret += (n % 10) * (n % 10);
      n /= 10;
    }
    return ret;
  }
  bool isHappy(int n) {
    std::set<int> seen;
    while (1) {
      if (n == 1) return true;
      seen.insert(n);
      if (seen.count(n = next(n))) return false;
    }
  }
};

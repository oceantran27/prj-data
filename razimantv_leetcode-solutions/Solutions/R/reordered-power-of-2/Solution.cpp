#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reordered-power-of-2

class Solution {
 public:
  bool reorderedPowerOf2(int N) {
    std::string s = std::to_string(N);
    sort(s.begin(), s.end());
    for (int i = 1; i < 1'000'000'000; i *= 2) {
      std::string ss = std::to_string(i);
      sort(ss.begin(), ss.end());
      if (s == ss) return true;
    }
    return false;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/second-largest-digit-in-a-string

class Solution {
 public:
  int secondHighest(string s) {
    set<char> ss;
    for (char c : s)
      if (c <= '9') ss.insert(c);
    if (ss.size() < 2) return -1;
    auto sit = ss.rbegin();
    ++sit;
    return (*sit) - '0';
  }
};

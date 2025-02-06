#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/make-the-string-great

class Solution {
 public:
  bool bad(char a, char b) { return ((a ^ b) == 32); }
  string makeGood(string s) {
    string ret;
    for (char c : s) {
      if (!ret.empty() and bad(c, ret.back()))
        ret.pop_back();
      else
        ret += c;
    }
    return ret;
  }
};

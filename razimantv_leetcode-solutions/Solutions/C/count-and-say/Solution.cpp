#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-and-say

class Solution {
 public:
  string countAndSay(int n, const string& s = "1") {
    if (n == 1) return s;
    string ret;
    for (int i = 0, cur = 0;; ++i) {
      if (!s[i]) {
        ret += to_string(cur) + s[i - 1];
        break;
      }
      if (!i or s[i] == s[i - 1])
        ++cur;
      else {
        ret += to_string(cur) + s[i - 1];
        cur = 1;
      }
    }
    return countAndSay(n - 1, ret);
  }
};

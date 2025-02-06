#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses

class Solution {
 public:
  string minRemoveToMakeValid(string s) {
    for (int i = 0, dir = 1; i < 2; ++i, dir = -dir) {
      string cur;
      for (int p = 0; char c : s) {
        int add = 0;
        if (c == '(')
          add = dir;
        else if (c == ')')
          add = -dir;
        if (p + add >= 0) cur += c, p += add;
      }
      s = cur;
      reverse(s.begin(), s.end());
    }
    return s;
  }
};

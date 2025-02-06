#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
 public:
  int myAtoi(string s) {
    long long cur = 0, lim = 1ll << 31;
    int pos = 1, n = s.size(), i = 0;
    while (i < n and s[i] == ' ') ++i;
    if (i == n) goto bpp;
    if (s[i] == '-')
      pos = 0, ++i;
    else if (s[i] == '+')
      ++i;
    while (i < n and isdigit(s[i])) {
      cur = cur * 10 + s[i++] - '0';
      if (cur >= lim - pos) {
        cur = lim - pos;
        goto bpp;
      }
    }
  bpp:
    if (!pos) cur = -cur;
    return cur;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-addition-to-make-integer-beautiful/

class Solution {
 public:
  long long makeIntegerBeautiful(long long n, int target) {
    string s = to_string(n);

    int cnt{};
    for (char c : s) cnt += c - '0';
    if (cnt <= target) return 0;

    int L = s.size(), i{};
    long long pref{};
    for (int cur = 0; i < L; ++i) {
      cur += s[i] - '0';
      if (cur >= target) break;
      pref = pref * 10 + s[i] - '0';
    }

    ++pref;
    while (i++ < L) pref *= 10;
    return pref - n;
  }
};

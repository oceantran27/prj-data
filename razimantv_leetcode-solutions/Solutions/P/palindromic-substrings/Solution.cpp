#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/palindromic-substrings

class Solution {
 public:
  int countSubstrings(string s) {
    int ret = 0;
    for (int i = 0, n = s.size(); i < 2 * n - 1; ++i)
      for (int l = i / 2, r = (i + 1) / 2; l >= 0 and r < n and s[l] == s[r];
           --l, ++r)
        ++ret;
    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/largest-palindromic-number

class Solution {
 public:
  string largestPalindromic(string num) {
    map<char, int> cnt;
    for (char c : num) ++cnt[c];
    if (cnt.size() == 1 and cnt.count('0')) return "0";

    string ret;
    for (auto mit = cnt.rbegin(); mit != cnt.rend(); ++mit) {
      auto [c, v] = *mit;
      if (ret.size() or c > '0') ret += string(v / 2, c);
    }

    string rev{ret};
    reverse(rev.begin(), rev.end());

    for (auto mit = cnt.rbegin(); mit != cnt.rend(); ++mit) {
      auto [c, v] = *mit;
      if (v & 1) return ret + c + rev;
    }
    return ret + rev;
  }
};

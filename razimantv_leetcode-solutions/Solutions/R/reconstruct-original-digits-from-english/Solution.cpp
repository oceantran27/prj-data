#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reconstruct-original-digits-from-english

class Solution {
 public:
  string originalDigits(string s) {
    vector<tuple<char, int, string>> letters{
        {'z', 0, "zero"}, {'w', 2, "two"},   {'g', 8, "eight"},
        {'x', 6, "six"},  {'s', 7, "seven"}, {'u', 4, "four"},
        {'v', 5, "five"}, {'h', 3, "three"}, {'o', 1, "one"},
        {'i', 9, "nine"}};

    vector<int> cnt(26), digits(10);
    for (char c : s) ++cnt[c - 'a'];

    for (int i = 0; i < 10; ++i) {
      auto [c, d, w] = letters[i];
      while (cnt[c - 'a']) {
        ++digits[d];
        for (char cc : w) --cnt[cc - 'a'];
      }
    }

    string ret = "";
    for (int i = 0; i < 10; ++i) {
      ret += string(digits[i], '0' + i);
    }
    return ret;
  }
};

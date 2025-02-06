#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique

class Solution {
 public:
  int minDeletions(string s) {
    unordered_map<char, int> cnt;
    for (char c : s) ++cnt[c];
    unordered_set<int> seen;

    int ret{};
    for (auto [k, v] : cnt) {
      while (v and seen.count(v)) --v, ++ret;
      seen.insert(v);
    }
    return ret;
  }
};

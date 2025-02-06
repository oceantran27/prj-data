#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-pairs-of-similar-strings/

class Solution {
 public:
  int similarPairs(vector<string> &words) {
    map<set<char>, int> cnt;
    for (const auto &w : words) {
      set<char> s;
      for (char c : w) s.insert(c);
      ++cnt[s];
    }

    int ret{};
    for (const auto &[k, v] : cnt) ret += (v * (v - 1)) / 2;
    return ret;
  }
};

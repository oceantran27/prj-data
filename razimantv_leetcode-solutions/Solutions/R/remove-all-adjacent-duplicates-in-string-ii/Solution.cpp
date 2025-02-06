#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii

class Solution {
 public:
  string removeDuplicates(string s, int k) {
    vector<pair<char, int>> cnt;
    for (char c : s) {
      if (cnt.empty() or cnt.back().first != c)
        cnt.push_back({c, 1});
      else
        cnt.back().second++;
      if (cnt.back().second == k) cnt.pop_back();
    }

    string ret;
    for (auto [c, v] : cnt) ret += string(v, c);
    return ret;
  }
};

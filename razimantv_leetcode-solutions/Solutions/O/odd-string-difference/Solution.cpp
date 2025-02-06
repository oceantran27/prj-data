#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/odd-string-difference/

class Solution {
 public:
  vector<int> conv(const string& s) {
    vector<int> ret;
    for (int i = 0, n = s.size(); i < n - 1; ++i)
      ret.push_back(s[i + 1] - s[i]);
    return ret;
  }
  string oddString(vector<string>& words) {
    map<vector<int>, vector<string>> m;
    for (auto& w : words) m[conv(w)].push_back(w);
    for (auto& [k, v] : m)
      if (v.size() == 1) return v[0];
    return "";
  }
};

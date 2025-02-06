#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

class Solution {
 public:
  string removeOccurrences(string s, string part) {
    int p = part.size();
    while (1) {
      auto cur = s.find(part);
      if (cur == std::string::npos) return s;
      s = s.substr(0, cur) + s.substr(cur + p);
    };
    return s;
  }
};

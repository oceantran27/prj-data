#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  string minWindow(string s, string t) {
    unordered_map<char, int> m;
    for (auto& x : t) {
      ++m[x];
    }
    int minLen = INT_MAX;
    int start = 0;
    int l = 0;
    int cnt = 0;
    for (int r = 0; r < s.size(); ++r) {
      if (--m[s[r]] >= 0) {
        ++cnt;
      }
      while (cnt == t.size()) {
        if (r - l + 1 < minLen) {
          minLen = r - l + 1;
          start = l;
        }
        if (++m[s[l]] > 0) {
          --cnt;
        }
        ++l;
      }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
  }
};

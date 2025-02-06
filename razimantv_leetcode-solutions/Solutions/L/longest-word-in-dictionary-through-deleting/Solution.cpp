#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-word-in-dictionary-through-deleting

class Solution {
 public:
  string findLongestWord(string s, vector<string>& d) {
    string ret = "";

    for (const auto& s2 : d) {
      bool flag = true;
      for (int i = 0; char c : s2) {
        while (flag and (s[i] != c)) {
          if (s[i] == 0) {
            flag = false;
          }
          ++i;
        }
        if (!flag) break;
        ++i;
      }

      if (flag and
          (s2.size() > ret.size() or (s2.size() == ret.size() and s2 < ret)))
        ret = s2;
    }
    return ret;
  }
};

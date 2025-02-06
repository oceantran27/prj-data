#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/simplify-path

class Solution {
 public:
  string simplifyPath(string path) {
    vector<string> out;

    string cur;
    for (int i = 0, n = path.size();; ++i) {
      if (i == n or path[i] == '/') {
        if (cur == "..") {
          if (!out.empty()) out.pop_back();
        } else if (cur != "" and cur != ".")
          out.push_back(cur);
        if (i == n) break;
        cur = "";
      } else
        cur += path[i];
    }

    if (out.empty()) return "/";
    string ret;
    for (const auto& s : out) ret += "/" + s;
    return ret;
  }
};

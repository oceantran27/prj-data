#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/generate-parentheses

class Solution {
 public:
  vector<vector<string>> ret;
  vector<string> generateParenthesis(int n) {
    ret.resize(n + 1);
    ret[0] = {""};
    for (int i = 1; i <= n; ++i)
      for (int j = 0; j < i; ++j)
        for (auto &s1 : ret[j])
          for (auto &s2 : ret[i - 1 - j]) ret[i].push_back("(" + s1 + ")" + s2);
    return ret.back();
  }
};

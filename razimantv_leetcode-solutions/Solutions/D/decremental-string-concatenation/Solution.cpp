#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/decremental-string-concatenation/

class Solution {
 public:
  int minimizeConcatenatedLength(vector<string>& words) {
    string empty;
    unordered_map<string, int> dp{
        {empty + words[0][0] + words[0].back(), words[0].size()}};

    for (int i = 1, n = words.size(); i < n; ++i) {
      char s = words[i][0], e = words[i].back();
      int l = words[i].size();
      unordered_map<string, int> next;
      for (auto [k, v] : dp) {
        char ss = k[0], ee = k[1];
        string se = empty + s + ee;
        if (!next.count(se)) next[se] = INT_MAX;
        next[se] = min(next[se], v + l - (e == ss));

        se = empty + ss + e;
        if (!next.count(se)) next[se] = INT_MAX;
        next[se] = min(next[se], v + l - (s == ee));
      }
      dp = next;
    }

    int ret{1234567};
    for (auto [k, v] : dp) ret = min(ret, v);
    return ret;
  }
};

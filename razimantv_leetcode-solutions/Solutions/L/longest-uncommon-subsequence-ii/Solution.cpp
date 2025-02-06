#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-uncommon-subsequence-ii

class Solution {
 public:
  bool work(const string& s, int mask, const string& y) {
    for (int i = 0, j = 0; s[i]; ++i) {
      if (!(mask & (1 << i))) continue;
      while (y[j] != s[i])
        if (!y[j++]) return false;
      ++j;
    }
    return true;
  }
  int findLUSlength(vector<string>& strs) {
    int W = strs.size(), best = -1;
    for (int i = 0; i < W; ++i) {
      int L = strs[i].size();
      for (int mask = (1 << L) - 1; mask; mask = 0) {
        int x = __builtin_popcount(mask);
        if (x < best) continue;

        bool flag = true;
        for (int j = 0; j < W; ++j) {
          if (j == i) continue;
          if (work(strs[i], mask, strs[j])) {
            flag = false;
            break;
          }
        }
        if (flag) best = max(best, x);
      }
    }
    return best;
  }
};

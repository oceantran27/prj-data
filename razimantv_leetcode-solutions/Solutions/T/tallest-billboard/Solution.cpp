#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/tallest-billboard/

class Solution {
 public:
  int tallestBillboard(vector<int>& rods) {
    int smax = accumulate(rods.begin(), rods.end(), 0) / 2;
    unordered_map<int, int> dp{{0, 0}};
    for (int x : rods) {
      auto next = dp;
      for (auto [k, v] : dp) {
        int knext = k + x;
        if (knext <= smax) next[knext] = max(next[knext], v);
        knext = abs(k - x);
        if (knext <= smax) next[knext] = max(next[knext], v + min(x, k));
      }
      dp = next;
    }
    return dp[0];
  }
};

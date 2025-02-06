#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-ideal-subsequence

class Solution {
 public:
  int longestIdealString(string s, int k) {
    vector<int> best(26);
    for (char c : s) {
      int d = c - 'a', bestprev = 0;
      for (int start = max(d - k, 0), end = min(d + k, 25), i = start; i <= end;
           ++i)
        bestprev = max(bestprev, best[i]);
      best[d] = bestprev + 1;
    }
    return *max_element(best.begin(), best.end());
  }
};

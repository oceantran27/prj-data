#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/distinct-subsequences

class Solution {
 public:
  int numDistinct(string s, string t) {
    int L = t.size();
    vector<long long> DP(L + 1);
    DP[0] = 1;
    for (char c : s)
      for (int i = L - 1; i >= 0; --i)
        if (c == t[i]) DP[i + 1] = (DP[i + 1] + DP[i]) & ((1ll << 32) - 1);
    return DP[L];
  }
};

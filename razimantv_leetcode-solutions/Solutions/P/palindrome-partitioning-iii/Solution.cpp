#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/palindrome-partitioning-iii

class Solution {
 public:
  int palindromePartition(string s, int k) {
    int L = s.size();
    vector<vector<int>> mincost(L, vector<int>(L, 0));
    for (int i = 0; i < L; ++i)
      for (int j = i + 1; j < L; ++j) {
        for (int ii = i, jj = j; ii < jj; ++ii, --jj)
          if (s[ii] != s[jj]) ++mincost[i][j];
      }

    vector<vector<int>> DP(L + 1, vector<int>(k + 1, L));
    DP[L][0] = 0;
    for (int i = L - 1; i >= 0; --i) {
      for (int j = i; j < L; ++j) {
        for (int c = 1; c <= k; ++c) {
          DP[i][c] = min(DP[i][c], DP[j + 1][c - 1] + mincost[i][j]);
        }
      }
    }
    return DP[0][k];
  }
};

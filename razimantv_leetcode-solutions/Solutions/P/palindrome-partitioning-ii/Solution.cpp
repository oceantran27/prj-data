#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/palindrome-partitioning-ii

class Solution {
 public:
  int minCut(string s) {
    int L = s.size();
    vector<vector<char>> ispali(L, vector<char>(L, 0));
    for (int l = 1; l <= L; ++l) {
      for (int i = 0; i + l <= L; ++i) {
        if (l == 1)
          ispali[i][i] = 1;
        else if (l == 2)
          ispali[i][i + 1] = (s[i] == s[i + 1]);
        else
          ispali[i][i + l - 1] =
              (ispali[i + 1][i + l - 2] and (s[i] == s[i + l - 1]));
      }
    }

    vector<int> DP(L + 1, L);
    DP[L] = 0;
    for (int i = L - 1; i >= 0; --i)
      for (int j = i; j < L; ++j)
        if (ispali[i][j]) DP[i] = min(DP[i], DP[j + 1] + 1);
    return DP[0] - 1;
  }
};

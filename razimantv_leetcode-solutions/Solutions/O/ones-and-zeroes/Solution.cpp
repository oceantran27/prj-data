#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/ones-and-zeroes

class Solution {
 public:
  int findMaxForm(vector<string>& strs, int m, int n) {
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));
    for (auto s : strs) {
      int z = 0, o = 0;
      for (char c : s) ++(c == '0' ? z : o);
      for (int i = m; i >= z; --i)
        for (int j = n; j >= o; --j)
          dp[i][j] = max(dp[i][j], dp[i - z][j - o] + 1);
    }
    return dp[m][n];
  }
};

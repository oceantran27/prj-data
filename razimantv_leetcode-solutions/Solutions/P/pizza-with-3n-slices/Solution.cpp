#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/pizza-with-3n-slices

class Solution {
 public:
  int maxSizeSlices(vector<int>& slices) {
    int N3 = slices.size(), N = N3 / 3;

    int ret;
    {
      int shift = -1;
      vector<vector<int>> DP(N3, vector<int>(N + 1, 0));
      DP[1][1] = slices[1 + shift];
      for (int i = 2; i < N3; ++i) {
        for (int j = 1; j <= N; ++j) {
          DP[i][j] = max(DP[i - 1][j], DP[i - 2][j - 1] + slices[i + shift]);
        }
      }
      ret = DP[N3 - 1][N];
    }
    {
      int shift = 0;
      vector<vector<int>> DP(N3, vector<int>(N + 1, 0));
      DP[1][1] = slices[1 + shift];
      for (int i = 2; i < N3; ++i) {
        for (int j = 1; j <= N; ++j) {
          DP[i][j] = max(DP[i - 1][j], DP[i - 2][j - 1] + slices[i + shift]);
        }
      }
      ret = max(ret, DP[N3 - 1][N]);
    }
    return ret;
  }
};

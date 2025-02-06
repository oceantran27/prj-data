#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-common-subsequence

class Solution {
 public:
  int longestCommonSubsequence(string text1, string text2) {
    int M = text1.size(), N = text2.size();
    vector<vector<int>> best(M + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M; i++)
      for (int j = 0; j < N; j++)
        if (text1[i] == text2[j])
          best[i + 1][j + 1] = best[i][j] + 1;
        else
          best[i + 1][j + 1] = max(best[i][j + 1], best[i + 1][j]);
    return best[M][N];
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/uncrossed-lines

class Solution {
 public:
  int maxUncrossedLines(vector<int>& A, vector<int>& B) {
    int M = A.size(), N = B.size();
    vector<vector<int>> DP(M + 1, vector<int>(N + 1, 0));
    for (int i = 0; i < M; i++)
      for (int j = 0; j < N; j++) {
        DP[i + 1][j + 1] = max(DP[i][j + 1], DP[i + 1][j]);
        if (A[i] == B[j])
          DP[i + 1][j + 1] = max(DP[i + 1][j + 1], 1 + DP[i][j]);
      }
    return DP[M][N];
  }
};

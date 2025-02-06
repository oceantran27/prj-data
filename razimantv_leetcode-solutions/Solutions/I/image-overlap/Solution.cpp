#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/image-overlap

class Solution {
 public:
  int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
    int best = 0, N = A.size();
    for (int sx = 1 - N; sx < N; ++sx) {
      for (int sy = 1 - N; sy < N; ++sy) {
        int cur = 0;
        for (int i = max(0, sx); i <= min(0, sx) + N - 1; ++i) {
          for (int j = max(0, sy); j <= min(0, sy) + N - 1; ++j) {
            cur += A[i][j] * B[i - sx][j - sy];
          }
        }
        best = max(best, cur);
      }
    }
    return best;
  }
};

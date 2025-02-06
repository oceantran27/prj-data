#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-sum-of-an-hourglass/

class Solution {
 public:
  int maxSum(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    int best = 0;
    for (int i = 1; i < m - 1; ++i) {
      for (int j = 1; j < n - 1; ++j) {
        int cur = grid[i][j];
        for (int k = j - 1; k <= j + 1; ++k)
          cur += grid[i - 1][k] + grid[i + 1][k];
        best = max(best, cur);
      }
    }
    return best;
  }
};

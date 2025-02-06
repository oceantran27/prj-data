#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    int n = obstacleGrid.size();
    if (n == 0)
      return 0;
    int m = obstacleGrid[0].size();

    vector<vector<int>> dp(n, vector<int>(m));
    dp[0][0] = !(obstacleGrid[0][0]);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (obstacleGrid[i][j])
          continue;
        if (i - 1 >= 0) {
          dp[i][j] += dp[i - 1][j];
        }
        if (j - 1 >= 0) {
          dp[i][j] += dp[i][j - 1];
        }
      }
    }
    return dp[n - 1][m - 1];
  }
};

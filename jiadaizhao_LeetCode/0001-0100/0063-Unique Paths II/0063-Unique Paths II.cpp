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
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) {
            return 0;
        }
        int n = obstacleGrid[0].size();
        if (obstacleGrid[0][0] || obstacleGrid[m - 1][n - 1]) {
            return 0;
        }
        
        vector<vector<long>> dp(m, vector<long>(n));
        
        for (int j = 0; j < n; ++j) {
            if (obstacleGrid[0][j] == 0) {
                dp[0][j] = 1;
            }
            else {
                break;
            }
        }
        
        for (int i = 1; i < m; ++i) {
            if (obstacleGrid[i][0] == 0 && dp[i - 1][0]) {
                dp[i][0] = 1;
            }
            for (int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 0) {
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
                }
            }
        }
        
        return dp[m - 1][n - 1];
    }
};

// Improve space complexity to 1-D array
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0) {
            return 0;
        }
        int n = obstacleGrid[0].size();
        if (obstacleGrid[m - 1][n - 1]) {
            return 0;
        }
        
        vector<long> dp(n);
        for (int i = 0; i < m; ++i) {
            if (i == 0) {
                dp[0] = (obstacleGrid[i][0] == 0) ? 1 : 0;
            }
            else if (obstacleGrid[i][0] == 1) {
                dp[0] = 0;
            }
            for (int j = 1; j < n; ++j) {
                if (obstacleGrid[i][j] == 0) {
                    dp[j] += dp[j - 1];
                }
                else {
                    dp[j] = 0;
                }
            }
        }
        
        return dp[n - 1];
    }
};

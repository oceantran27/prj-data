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
private:
    // Let's run a simple dfs. If we come to the same cell with two robots, let's subtract that value.
    int dfs(int n, int m, int r, int c1, int c2, unordered_map<pair<int, pair<int, int>>, int> &dp, vector<vector<int>> &grid) {
        if (c1 < 0 || c1 >= m || c2 < 0 || c2 >= m) {
            return 0;
        } else if (r == n) {
            return 0;
        } else if (dp.count({r, {c1, c2}}) > 0) {
            return dp[{r, {c1, c2}}];
        } else {
            int current_ceil = grid[r][c1] + grid[r][c2];
            
            // Here is that subtraction
            if (c1 == c2) {
                current_ceil -= grid[r][c2];
            }
            
            // Running dfs from all possible cells
            int mx = 0;
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    mx = max(mx, dfs(n, m, r + 1, c1 + i, c2 + j, dp, grid));
                }
            }
            
            return dp[{r, {c1, c2}}] = current_ceil + mx;
        }
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        unordered_map<pair<int, pair<int, int>>, int> dp;
        
        int n = grid.size();
        int m = grid[0].size();
        
        return dfs(n, m, 0, 0, m - 1, dp, grid);
    }
};

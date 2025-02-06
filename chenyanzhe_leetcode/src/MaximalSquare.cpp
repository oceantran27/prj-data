#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "MaximalSquare.hpp"

int MaximalSquare::maximalSquare(vector<vector<char>> &matrix) {
    size_t n = matrix.size();

    if (n == 0) return 0;

    size_t m = matrix[0].size();

    if (m == 0) return 0;

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
        dp[i][0] = (matrix[i][0] == '1') ? 1 : 0;

    for (int j = 0; j < m; j++)
        dp[0][j] = (matrix[0][j] == '1') ? 1 : 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] == '0')
                dp[i][j] = 0;
            else
                dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
        }
    }

    int w = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            w = max(w, dp[i][j]);

    return w * w;
}

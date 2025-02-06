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
    int findMaxForm(vector<string> &strs, int m, int n) {
        int size = strs.size();
        if (size == 0) return 0;
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int k = 0; k < strs.size(); ++k) {
            int num0 = 0, num1 = 0;
            for (int j = 0; j < strs[k].size(); ++j) {
                if (strs[k][j] == '0')
                    ++num0;
                else
                    ++num1;
            }

            for(int i = m; i >= num0; --i)
                for(int j = n; j >= num1; --j)
                    dp[i][j] = max(dp[i][j], dp[i - num0][j-num1] + 1);
        }

        return dp[m][n];
    }
};

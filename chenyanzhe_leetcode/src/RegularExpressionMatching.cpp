#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "RegularExpressionMatching.hpp"

#include <vector>

using namespace std;

bool RegularExpressionMatching::isMatch(string s, string p) {
    size_t sl = s.size();
    size_t pl = p.size();
    vector<vector<bool>> dp(sl + 1, vector<bool>(pl + 1, false));

    dp[0][0] = true;

    for (int i = 1; i <= sl; i++)
        dp[i][0] = false;

    for (int j = 1; j <= pl; j++)
        dp[0][j] = j > 1 && p[j - 1] == '*' && dp[0][j - 2];

    for (int i = 1; i <= sl; i++) {
        for (int j = 1; j <= pl; j++) {
            if (p[j - 1] == '*')
                dp[i][j] = dp[i][j - 2] || (isMatch(s[i - 1], p[j - 2]) && dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j - 1] && isMatch(s[i - 1], p[j - 1]);
        }
    }

    return dp[sl][pl];
}

bool RegularExpressionMatching::isMatch(char _s, char _p) {
    return _p == '.' || _s == _p;
}

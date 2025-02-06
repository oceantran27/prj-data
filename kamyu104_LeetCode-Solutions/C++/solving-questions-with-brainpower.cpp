#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

// dp
class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<int64_t> dp(size(questions) + 1);
        for (int i = size(dp) - 2; i >= 0; --i) {
            dp[i] = max(dp[i + 1], questions[i][0] + (i + 1 + questions[i][1] < size(dp) ? dp[i + 1 + questions[i][1]] : static_cast<int64_t>(0)));
        }
        return dp[0];
    }
};

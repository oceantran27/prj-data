#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n^2)
// Space: O(n)

class Solution {
public:
    double probabilityOfHeads(vector<double>& prob, int target) {
        vector<double> dp(target + 1);
        dp[0] = 1.0;
        for (const auto& p : prob) {
            for (int i = target; i >= 0; --i) {
                dp[i] = ((i >= 1) ? dp[i - 1] : 0.0) * p + dp[i] * (1 - p);
            }
        }
        return dp[target];
    }
};

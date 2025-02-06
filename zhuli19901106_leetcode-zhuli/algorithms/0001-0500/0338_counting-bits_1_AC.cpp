#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
// O(n) DP
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num + 1, 0);
        int i;
        for (i = 1; i <= num; ++i) {
            dp[i] = dp[i & i - 1] + 1;
        }
        return dp;
    }
};

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
    int change(int amount, vector<int> &coins) {
        sort(coins.begin(), coins.end());
        vector<int> dp(static_cast<unsigned long>(amount + 1));
        dp[0] = 1;
        for (int i : coins) {
            for (int j = i; j <= amount; ++j) {
                dp[j] += dp[j - i];
            }
        }
        return dp[amount];
    }
};

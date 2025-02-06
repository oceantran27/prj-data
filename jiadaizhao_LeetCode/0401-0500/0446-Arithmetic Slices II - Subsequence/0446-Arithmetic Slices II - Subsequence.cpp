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
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size();
        if (n <= 2) {
            return 0;
        }
        int count = 0;
        vector<unordered_map<int, int>> dp(n);
        for (int j = 1; j < n; ++j) {
            for (int i = 0; i < j; ++i) {
                long long d = (long long)A[j] - A[i];
                if (d > INT_MAX || d < INT_MIN) {
                    continue;
                }
                int diff = d;
                ++dp[j][diff];
                if (dp[i].find(diff) != dp[i].end()) {
                    dp[j][diff] += dp[i][diff];
                    count += dp[i][diff];
                }
            }
        }
        
        return count;
    }
};

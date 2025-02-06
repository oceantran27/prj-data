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
    int numDecodings(string s) {
        int n = s.size();
        int MOD = 1000000007;
        vector<long> dp(1 + n);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            if (s[i - 1] == '*') {
                dp[i] = (dp[i - 1] * 9) % MOD;
            }
            else if (s[i - 1] != '0') {
                dp[i] = dp[i - 1];
            }
            
            if (i >= 2) {
                if (s[i - 2] == '*') {
                    if (s[i - 1] == '*') {
                        dp[i] = (dp[i] + (dp[i - 2] * 15) % MOD) % MOD;
                    }
                    else if (s[i - 1] >= '0' && s[i - 1] <= '6') {
                        dp[i] = (dp[i] + (dp[i - 2] * 2) % MOD) % MOD;
                    }
                    else {
                        dp[i] = (dp[i] + dp[i - 2]) % MOD;
                    }
                }
                else if (s[i - 2] == '1') {
                    if (s[i - 1] == '*') {
                        dp[i] = (dp[i] + (dp[i - 2] * 9) % MOD) % MOD;
                    }
                    else {
                        dp[i] = (dp[i] + dp[i - 2]) % MOD;
                    }
                }
                else if (s[i - 2] == '2') {
                    if (s[i - 1] == '*') {
                        dp[i] = (dp[i] + (dp[i - 2] * 6) % MOD) % MOD;
                    }
                    else if (s[i - 1] >= '0' && s[i - 1] <= '6') {
                        dp[i] = (dp[i] + dp[i - 2]) % MOD;
                    }
                }                    
            }
        }
        
        return dp[n];
    }
};

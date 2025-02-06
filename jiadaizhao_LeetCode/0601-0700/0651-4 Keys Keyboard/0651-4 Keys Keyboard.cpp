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
    int maxA(int N) {
        if (N <= 6) {
            return N;
        }
        
        vector<int> dp(1 + N);
        for (int i = 1; i <= 6; ++i) {
            dp[i] = i;
        }
        
        for (int i = 7; i <= N; ++i) {
            for (int j = i - 3; j >= 1; --j) {
                dp[i] = max(dp[i], dp[j] * (i - 1 - j));
            }
        }
        
        return dp[N];
    }
};

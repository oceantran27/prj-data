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
    int findDerangement(int n) {
        int MOD = 1e9 + 7;
        if (n == 1) {
            return 0;
        }
        
        int dp1 = 0, dp2 = 1;
        for (int i = 3; i <= n; ++i) {
            int dp3 = ((i - 1L) * (dp1 + dp2)) % MOD;
            dp1 = dp2;
            dp2 = dp3;
        }
        
        return dp2;
    }
};

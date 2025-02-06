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
    int numWays(int n, int k) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return k;
        }
        
        int sameColor = k;
        int diffColor = k * (k - 1);
        for (int i = 3; i <= n; ++i) {
            int temp = diffColor;
            diffColor = sameColor * (k - 1) + diffColor * (k - 1);
            sameColor = temp;
        }
        
        return sameColor + diffColor;
    }
};

class Solution {
public:
    int numWays(int n, int k) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return k;
        }
        
        int dp0 = k, dp1 = k * k;
        for (int i = 3; i <= n; ++i) {
            int dp2 = (dp0 + dp1) * (k - 1);
            dp0 = dp1;
            dp1 = dp2;
        }
        
        return dp1;
    }
};

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
    int minSideJumps(vector<int>& obstacles) {
        array<int, 4> dp{10000000, 1, 0, 1};
        for (auto i : obstacles) {
            dp[i] = dp[0];
            for (auto j = 1; j <= 3; ++j)
                if (i != j)
                    dp[j] = min({dp[1] + (j != 1), dp[2] + (j != 2), dp[3] + (j != 3)});
        }
        return min({dp[1], dp[2], dp[3]});
    }
};
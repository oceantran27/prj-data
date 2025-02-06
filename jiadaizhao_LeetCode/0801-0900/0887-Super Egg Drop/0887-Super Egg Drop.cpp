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
    int superEggDrop(int K, int N) {
        vector<int> dp(1 + K);
        int m = 0;
        while (dp.back() < N) {
            for (int i = K; i > 0; --i) {
                dp[i] = dp[i - 1] + dp[i] + 1;
            }
            ++m;
        }
        return m;
    }
};
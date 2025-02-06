#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/super-egg-drop/
// Author: github.com/lzl124631x
// Time: O(SK) where S is the result.
// Space: O(K)
// Ref: https://leetcode.com/problems/super-egg-drop/discuss/159508/easy-to-understand
class Solution {
public:
    int superEggDrop(int K, int N) {
        int step = 0;
        vector<int> dp(K + 1);
        for (; dp[K] < N; ++step) {
            for (int k = K; k > 0; --k) {
                dp[k] += 1 + dp[k - 1];
            }
        }
        return step;
    }
};
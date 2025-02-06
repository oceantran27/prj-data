#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

// two pointers, sliding window, dp
class Solution {
public:
    int maximizeWin(vector<int>& prizePositions, int k) {
        vector<int> dp(size(prizePositions) + 1);
        int result = 0;
        for (int right = 0, left = 0; right < size(prizePositions); ++right) {
            while (prizePositions[right] - prizePositions[left] > k) {
                ++left;
            }
            dp[right + 1] = max(dp[right], right - left + 1);
            result = max(result, dp[left] + (right - left + 1));
        }
        return result;
    }
};

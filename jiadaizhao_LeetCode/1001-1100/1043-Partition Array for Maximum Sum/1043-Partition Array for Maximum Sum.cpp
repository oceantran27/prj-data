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
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        vector<int> dp(1 + A.size());
        for (int j = 1; j <= A.size(); ++j) {
            int currMax = A[j - 1];
            for (int i = j; i > max(j - K, 0); --i) {
                currMax = max(currMax, A[i - 1]);
                dp[j] = max(dp[j], dp[i - 1] + currMax * (j - i + 1));
            }
        }
        
        return dp.back();
    }
};

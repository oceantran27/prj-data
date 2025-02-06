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
    vector<int> cheapestJump(vector<int>& A, int B) {
        int n = A.size();
        vector<int> dp(n, -1);
        dp[n - 1] = A[n - 1];
        vector<int> next(n);
        next[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; --i) {
            if (A[i] == -1) {
                continue;
            }
            
            for (int j = min(n - 1, i + B); j > i; --j) {
                if (dp[j] != -1 && (dp[i] == -1 || dp[i] >= dp[j] + A[i])) {
                    dp[i] = dp[j] + A[i];
                    next[i] = j;
                }
            }
        }
        
        if (dp[0] == -1) {
            return {};
        }
        
        vector<int> result;
        int curr = 0;
        result.push_back(1);
        while (next[curr] != curr) {
            curr = next[curr];
            result.push_back(curr + 1);
        }
        
        return result;
    }
};

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
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        vector<int> dp(1 + B.size());
        for (int i = 1; i <= A.size(); ++i) {
            vector<int> temp(1 + B.size());
            for (int j = 1; j <= B.size(); ++j) {
                if (A[i - 1] == B[j - 1]) {
                    temp[j] = dp[j - 1] + 1;
                }
                else {
                    temp[j] = max(temp[j - 1], dp[j]);
                }
            }
            swap(temp, dp);
        }

        return dp.back();
    }
};

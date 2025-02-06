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
    int maximumProfit(vector<int>& present, vector<int>& future, int budget) 
    {
        int n = present.size();
        
        vector<int>dp(1001);
        for (int i=0; i<n; i++)
            for (int j=budget; j>=present[i]; j--)
            {
                dp[j] = max(dp[j], dp[j-present[i]]+future[i]-present[i]);
            }
        
        return dp[budget];
    }
};

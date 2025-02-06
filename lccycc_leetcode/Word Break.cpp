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
    bool wordBreak(string s, unordered_set<string> &dict) {
        int n = s.size();
        vector<bool> dp;
        dp.resize(n+1);
        dp[0] = true;
        for (int i = 0; i<n; i++) if (dp[i]){
            for (int x = i+1; x<=n; x++) 
                if (dict.find(s.substr(i, x-i)) != dict.end())
                    dp[x] = true;
        }
        return dp[n];
    }
};

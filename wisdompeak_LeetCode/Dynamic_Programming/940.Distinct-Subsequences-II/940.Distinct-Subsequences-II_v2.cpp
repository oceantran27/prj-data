#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

using LL = long long;
class Solution {
    LL dp[26];
    LL M = 1e9+7;
public:
    int distinctSubseqII(string s) 
    {
        for (char ch: s)
        {
            LL sum = 0;
            for (int i=0; i<26; i++)
                sum = (sum + dp[i]) % M;
                
            dp[ch-'a'] = sum + 1;
        }

        LL ret = 0;
        for (int i=0; i<26; i++)
            ret = (ret + dp[i]) % M;
        return ret;
    }
};

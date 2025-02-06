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
    bool divisorGame(int N) {
        bool dp[N+1];
        memset(dp, false, N+1);
        for(int i=2; i <= N; i++)
            for(int j = 1; j*j <= i;j++){
                if(i % j == 0 && !dp[i - j]) 
                    dp[i] = true;
            }
        
        return dp[N];
    }
};
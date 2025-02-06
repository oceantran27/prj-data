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
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int dp[amount+1];
        for(int i=0;i<=amount;i++) dp[i]=0;
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=1;j<=amount;j++){
                if(j>=coins[i]){
                    dp[j]+=dp[j-coins[i]];
                }
            }
        }
        return dp[amount];
    }
};
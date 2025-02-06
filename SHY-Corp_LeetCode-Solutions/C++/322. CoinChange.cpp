#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

"""
Problem Statement:
You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. 
If that amount of money cannot be made up by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.
Sample Input:
coins = [1,2,5], amount = 11
Output : 3
Explanation : 11 = 5 + 5 + 1
"""

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int t[coins.size()+1][amount+1];
        for(int i=0;i<=coins.size();i++){
            t[i][0] = 0;//If the amount of money, we require no coin to distribute it. So, the answer is 0.
        }
        for(int i=0;i<=amount;i++){
            t[0][i] = INT_MAX-1;//If the amount of money is non-zero and we do not have any coins of a particular denomination,we can't partition it, in other words,there will be infinite number of coins required.
        }
        for(int i=1;i<=coins.size();i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j){//If we can use that coin
                    t[i][j] = min(1+t[i][j-coins[i-1]],t[i-1][j]);
                }else{//If we cannot use it
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return (t[coins.size()][amount] >= 2147483646)?-1:t[coins.size()][amount];
    }
};
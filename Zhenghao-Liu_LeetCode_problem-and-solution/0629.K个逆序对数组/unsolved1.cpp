#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
* 设dp[i][j]表示由[1 2 ··· i]共i个数字构成的排列中，有j个逆序对，的数组有几个
* 显然j=0时候可能的数组只有一个，即升序排列即初始化dp[i][0]=1
* 那么对于dp[i][j]，考虑[1 2 ··· i-1]共i-1个数字构成的排列中，
  1. 此时插入数字i一共有i种插入的可能地方（共i-1个数字，每个数字的左边或右边）
  2. 且数字i是比[1 2 ··· i-1]共i-1个数字都要大的，即插入数字i是有可能在原有逆序对基础上增加的
* 现在对于数字[1 2 ··· i-1]共i-1个数字用索引来表示排列[p1 p2 ··· pi-1]
  1. 倘若将数字i插入到最后即pi-1的右端，那么此时没有新增逆序对，所以dp[i-1][j]->dp[i][j]
  2. 倘若将数字i插入到倒数第二个可插入位置即介于pi-2和pi-1中间，此时新增加一对逆序对{i,[pi-1]}，
     那么要想从i-1个数转移到i个数且逆序对为j的情况，且增加了一个新逆序对，则表明此时对于i-1个数来说要比j少一个逆序对，
     即dp[i-1][j-1]->dp[i][j]
  3. 将数字i插入到倒数第三个可插入位置即介于pi-3和pi-2中间，新增2个逆序对{i,[pi-2]},{i,[pi-1]}
     即dp[i-1][j-2]->dp[i][j]
  4. 以此类推
  5. 将数字i插入到第一个可插入位置即[1]的左边，此时因为原本一共有i-1个数，即新增了i-1个逆序对
     即dp[i-1][j-(i-1)]->dp[i][j]
* 得出转移方程dp[i][j]=dp[i-1][j]+dp[i-1][j-1]+···+dp[i-1][j-(i-1)]
*/
const int maxn=1e3+1;
const int maxk=1e3+1;
int dp[maxn][maxk];
class Solution {
    int mod=1e9+7;
public:
    int kInversePairs(int n, int k) {
        memset(dp,0,sizeof(dp));
        for (int i=1;i<=n;++i)
            dp[i][0]=1;
        for (int i=2;i<=n;++i)
            for (int j=1;j<=k;++j)
                for (int t=j;t>=0 && t>=j-(i-1);--t)
                {
                    dp[i][j]+=dp[i-1][t];
                    dp[i][j]%=mod;
                }
        return dp[n][k];
    }
};

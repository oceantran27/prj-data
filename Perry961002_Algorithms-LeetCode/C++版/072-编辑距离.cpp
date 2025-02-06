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
    int minDistance(string word1, string word2) {
        //用动态规划算法。dp[i][j]表示word1的前i个字符转换为wrod2的前j个字符需要的最小步数
        //考虑dp[i][j]与他前面位置的关系：
        //从dp[i-1][j]到dp[i][j]需要多考虑word1[i]这个字符，但j没变，所以应该删掉word1[i]
        //从dp[i][j-1]到dp[i][j]需要多考虑word2[j]这个字符，但i没变，所以应该加入word2[j]
        //从dp[i-1][j-1]到dp[i][j],需要考虑word1[i] == word2[j]?，是的话不变即不需要操作，不是的话则加1表示做修改
        int len1 = word1.size(), len2 = word2.size();
        vector<vector<int>> dp(len1 + 1,vector<int>(len2 + 1));  //考虑word1和Word2都从空开始
        for(int i=0;i<=len1;i++)
            dp[i][0] = i;
        for(int i=0;i<=len2;i++)
            dp[0][i] = i;
        for(int i=1;i<=len1;i++)
        {
            for(int j=1;j<=len2;j++)
            {
                int change = (word1[i-1] == word2[j-1])? 0 : 1;
                dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]) + 1, dp[i-1][j-1] + change);
            }
        }
        return dp[len1][len2];
    }
};
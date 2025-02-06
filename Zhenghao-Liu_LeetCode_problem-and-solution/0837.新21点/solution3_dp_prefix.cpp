#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
* 从0分开始
  <K分则从[1,W]随机抽取一个
  >=K则停止抽取，即K-1是可以抽卡的最大数字
  求最终<=N的概率
* 设dp[i]为分数为i开始，胜率的概率，即最后答案是dp[0]
  采用由后置前的思想（由前置后就变成了条件概率了太复杂）
* 因为0<=K<=N 且 1<=W
* 即最大抽卡数字K-1抽取牌后可以变成K-1+1~K-1+W
  但是因为从K开始就不抽牌了，所以K-1之后抽一次就不会变了
  即在中间一段是不会抽牌固定不变的了，那么在<=N的范围内不抽牌了不会变，即代表是必胜
  但又因为K-1+W可能小于等于N也可能大于N，所以取一个最小值
** 即初始化
  dp[i]在[K,min(k-1+W,N)]都是必胜即为1
* 注意最大可抽取排数字是K-1,抽取牌最大面值是W
  即可组成最大的数字是K-1+W
  且我们是从0开始的
** 初始化
  开辟一个有K+W空间数组
* 那对于dp[k-1]的概率呢，k-1可以抽取[1,W]的任意一张牌
  那就是(dp[k-1+1]+dp[k-1+2]+dp[k-1+3]+···dp[k-1+w])/W
  因为他能抽[1,W]中一张，k-1获胜的概率，就是抽了一次牌后，抽牌后所有情况获胜概率的平均值
** 得出通用状态转移方程
  dp[i]=(dp[i+1]+dp[i+2]+···dp[i+W])/W
* 所以从后往前填
**
* 但是对于每次都计算分子一连串太烦了，采取分子前缀和即可
* 且dp[K-1]可以简单的算
  又因为在K~min(K-1+W,N)是必胜的
  即必胜有min(K-1+W,N)-K+1种情况是必胜的即概率为1，即分子是min(K-1+W,N)-K+1
  分母是W
  就求出了第一个前缀和
*/
class Solution {
public:
    double new21Game(int N, int K, int W) {
        if (K==0)
            return 1.0;
        vector<double> dp(K+W,0);
        int upper_win=min(K-1+W,N);
        for (int i=K;i<=upper_win;++i)
            dp.at(i)=1.0;
        double prefix=upper_win-K+1;
        dp.at(K-1)=prefix/W;
        for (int i=K-2;i>=0;--i)
        {
            prefix-=dp.at(i+1+W);
            prefix+=dp.at(i+1);
            dp.at(i)=prefix/W;
        }
        return dp.at(0);
    }
};

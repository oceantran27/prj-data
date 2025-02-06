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
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int res = 1, len = pairs.size();
        //dp[i]表示以第i个数对结尾的最长链个数
        vector<int> dp(len, 1);
        sort(pairs.begin(), pairs.end(), cmp);
        for(int i=1;i<len;i++){
            for(int j=0;j<i;j++){
                //满足相离条件
                if(pairs[i][0] > pairs[j][1])
                    dp[i] = dp[j] + 1;
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};
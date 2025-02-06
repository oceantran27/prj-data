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
    IĽⷨһ
    Ҫע⴦ظĽ
*/



class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        vector<vector<int> > res;
        int n=num.size();
        if(!n)  return res;
        sort(num.begin(),num.end());
        vector<int> tmp;
        dfs(res,num,tmp,0,0,n);
        return res;
    }
    void dfs(vector<vector<int> > &res,vector<int> &num,vector<int> tmp,int cur,int s,int n)
    {
        if(cur == n){
            res.push_back(tmp);return ;
        }
        int prev = -1;
        for(int i = 0;i < n;i++)
        {
            if(s & (1 << i))    continue;
            else if(prev != -1 && num[i] == num[prev])      continue;//ظĽ⣬ǰѾԪԺҪ
            else{
                prev = i;
                if(tmp.size() != cur + 1)     tmp.push_back(num[i]);
                else    tmp[cur] = num[i];
                dfs(res,num,tmp,cur + 1,(1 << i) | s,n);
            }
        }
    }
};

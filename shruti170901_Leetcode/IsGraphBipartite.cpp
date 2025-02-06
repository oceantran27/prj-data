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
    int color[101];
    bool dfs(vector<vector<int>>&graph,int n,int prev){
        if(color[n]!=-1&&color[n]!=prev)
            return false;
        color[n]=prev;
        for(auto itr=graph[n].begin();itr!=graph[n].end();itr++)
        {
            if(color[*itr]==color[n])
                return false;
            else if(color[*itr]==-1&&!dfs(graph,*itr,3-color[n]))
                return false;
        
            
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        memset(color,-1,sizeof(color));
        for(int i=0;i<graph.size();i++)
        {
            if(color[i]==-1&&!dfs(graph,i,1))
                return false;
        }
        return true;
        
    }
};
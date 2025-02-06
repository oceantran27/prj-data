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
   
    int dfs(vector<vector<int>> &adj, int i, vector<int>& informTime, int ans){
        
        for(int k: adj[i]){
            ans=max(ans, dfs(adj, k, informTime,0));
        }
                     
        
        return ans+informTime[i];
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1)
                adj[manager[i]].push_back(i);
        }
        
        return dfs(adj, headID,informTime,0);
        
    }
};
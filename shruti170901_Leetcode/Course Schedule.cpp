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
    bool canFinish(int n, vector<vector<int>>& pre) {
        if(pre.size()==0){
            return true;
        }
        vector<vector<int>> adj(n);
        vector<int> indeg(n, 0);
        for(int i=0; i<pre.size(); i++){
            adj[pre[i][1]].push_back(pre[i][0]);
            indeg[pre[i][0]]++;
        }
        
        queue<int> q;
        for(int i=0; i<n; i++){
            if(indeg[i]==0) q.push(i);
        }
        vector<int> ans;
        while(!q.empty()){
            int tp = q.front();
            q.pop();
            ans.push_back(tp);
            for(auto c: adj[tp]){
                indeg[c]--;
                if(indeg[c]==0) q.push(c);
            }
            
        }
        
        return (ans.size()==n);
    }
};
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
    
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    
        vector<int> res, indegree(n);
        unordered_map<int, vector<int>> adj;
        
        for(auto &x : edges) {
            adj[x[0]].push_back(x[1]);
            indegree[x[1]]++;
        }
        
        for(int i=0; i<n; i++) {
            if(indegree[i] == 0)              res.push_back(i);
        }
        
        return res;
    }
    
};
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
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) 
    {
        queue<string>q;
        for (auto x: supplies)
            q.push(x);
        
        unordered_map<string,int>indegree;
        unordered_map<string, vector<string>>next;
        unordered_set<string>wanted(recipes.begin(), recipes.end());
        
        for (int i=0; i<recipes.size(); i++)
            for (int j=0; j<ingredients[i].size(); j++)
            {
                next[ingredients[i][j]].push_back(recipes[i]);
                indegree[recipes[i]] += 1;
            }                
        
        vector<string>rets;
        while (!q.empty())
        {
            string cur = q.front();
            q.pop();
            if (wanted.find(cur)!=wanted.end())
                rets.push_back(cur);
            for (auto x: next[cur])
            {
                indegree[x]-=1;
                if (indegree[x]==0)                
                    q.push(x);                
            }
        }

        return rets;
    }    
};

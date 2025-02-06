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
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<unordered_set<int>> adj(n+1), trustedBy(n+1);
        for(auto it:trust)
        {
            adj[it[0]].insert(it[1]);
            trustedBy[it[1]].insert(it[0]);
        }
        for(int i=1; i<=n; i++)
        {
            if(adj[i].size()==0)
            {
                if(trustedBy[i].size()==n-1)
                    return i;
            }
        }
        return -1;
    }
};
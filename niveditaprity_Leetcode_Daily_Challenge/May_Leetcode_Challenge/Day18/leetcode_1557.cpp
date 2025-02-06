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

       vector<bool>visited(n);
       for(auto edge : edges)
       {
           visited[edge[1]] = 1;
       }

       vector<int>ans;
       for(int i = 0; i < n; i++)
       {
        if(visited[i] == 0)
        {
         ans.push_back(i);
        }
       }
       return ans;

    }
};

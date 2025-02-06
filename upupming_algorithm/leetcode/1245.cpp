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
    vector<vector<int>> w;
    bool visited[10010];
    int ans, index;
    void dfs(int i, int depth) {
        if (depth > ans) {
            ans = depth;
            index = i;
        }
        visited[i] = true;
        for (auto j : w[i]) {
            if (!visited[j])
                dfs(j, depth + 1);
        }
        visited[i] = false;
    }
    
public:
    int treeDiameter(vector<vector<int>>& edges) {
        w.resize(edges.size() + 1);
        for (auto edge : edges) {
            w[edge[0]].push_back(edge[1]);
            w[edge[1]].push_back(edge[0]);
        }
        // 第一次用来找正确的一方端点
        dfs(0, 0);
        dfs(index, 0);
        return ans;
    }
};
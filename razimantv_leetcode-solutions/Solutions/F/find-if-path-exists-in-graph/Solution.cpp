#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
 public:
  vector<vector<int>> adj;
  vector<char> seen;

  bool dfs(int u, int target) {
    if (u == target) return true;
    seen[u] = true;
    for (int v : adj[u])
      if (!seen[v] and dfs(v, target)) return true;
    return false;
  }
  bool validPath(int n, vector<vector<int>>& edges, int source,
                 int destination) {
    adj.resize(n);
    seen.resize(n);
    for (auto& e : edges) {
      adj[e[0]].push_back(e[1]);
      adj[e[1]].push_back(e[0]);
    }

    return dfs(source, destination);
  }
};

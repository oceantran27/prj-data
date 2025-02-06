#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/most-profitable-path-in-a-tree/

class Solution {
 public:
  vector<int> depth, parent;
  vector<vector<int>> adj;

  void dfs1(int u, int par) {
    for (int v : adj[u])
      if (v != par) {
        depth[v] = depth[u] + 1;
        parent[v] = u;
        dfs1(v, u);
      }
  }
  int dfs2(int u, int par, vector<int>& amount) {
    if (u and adj[u].size() == 1) return amount[u];
    int best = -1'234'567'890;
    for (int v : adj[u])
      if (v != par) best = max(best, dfs2(v, u, amount));
    return best + amount[u];
  }
  int mostProfitablePath(vector<vector<int>>& edges, int bob,
                         vector<int>& amount) {
    int n = amount.size();
    depth.resize(n);
    parent.resize(n);
    adj.resize(n);
    for (auto& e : edges) {
      int u = e[0], v = e[1];
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    dfs1(0, -1);
    for (int u = bob, d = depth[bob]; d >= 0; u = parent[u], d -= 2)
      if (d)
        amount[u] = 0;
      else
        amount[u] /= 2;
    return dfs2(0, -1, amount);
  }
};

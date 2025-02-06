#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reachable-nodes-with-restrictions

class Solution {
 public:
  vector<vector<int>> adj;
  int dfs(int u, int par) {
    int cnt = 1;
    for (int v : adj[u])
      if (v != par) cnt += dfs(v, u);
    return cnt;
  }
  int reachableNodes(int n, vector<vector<int>>& edges,
                     vector<int>& restricted) {
    unordered_set<int> bad;
    for (int x : restricted) bad.insert(x);

    adj.resize(n);
    for (auto& v : edges) {
      if (bad.count(v[0]) or bad.count(v[1])) continue;
      adj[v[0]].push_back(v[1]);
      adj[v[1]].push_back(v[0]);
    }

    return dfs(0, -1);
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/largest-color-value-in-a-directed-graph

class Solution {
 public:
  int largestPathValue(string colors, vector<vector<int>>& edges) {
    int n = colors.size();
    vector<vector<int>> adj(n);
    vector<int> indegree(n);
    for (auto& e : edges) {
      indegree[e[1]]++;
      adj[e[0]].push_back(e[1]);
    }
    vector<int> todo, toposort;
    for (int i = 0; i < n; ++i)
      if (indegree[i] == 0) todo.push_back(i);
    while (!todo.empty()) {
      int u = todo.back();
      todo.pop_back();

      toposort.push_back(u);
      for (int v : adj[u]) {
        if (--indegree[v] == 0) todo.push_back(v);
      }
    }

    if (toposort.size() < n) return -1;

    vector<vector<int>> best(n, vector<int>(26));
    int ret = 0;
    for (int i = n - 1; i >= 0; --i) {
      int u = toposort[i];
      for (int v : adj[u]) {
        for (int c = 0; c < 26; ++c) best[u][c] = max(best[u][c], best[v][c]);
      }
      ret = max(ret, ++best[u][colors[u] - 'a']);
    }
    return ret;
  }
};

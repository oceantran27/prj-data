#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/

class Solution {
 public:
  vector<vector<pair<int, int>>> adj;
  vector<char> seen;
  int dfs(int u) {
    seen[u] = 1;
    int ret = INT_MAX;
    for (auto& [v, w] : adj[u]) {
      ret = min(ret, w);
      if (seen[v]) continue;
      ret = min(ret, dfs(v));
    }
    return ret;
  }
  int minScore(int n, vector<vector<int>>& roads) {
    adj.resize(n + 1);
    seen.resize(n + 1);
    for (auto& e : roads) {
      adj[e[0]].push_back({e[1], e[2]});
      adj[e[1]].push_back({e[0], e[2]});
    }
    return dfs(1);
  }
};

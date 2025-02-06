#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/

class Solution {
 public:
  vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
    vector<vector<int>> adj(n);
    for (const auto& e : edges) {
      adj[e[0]].push_back(e[1]);
      adj[e[1]].push_back(e[0]);
    }

    vector<int> ret(n);
    using mymap = unordered_map<char, int>;
    std::function<mymap(int, int)> dfs = [&](int u, int par) {
      mymap cur{{labels[u], 1}};
      for (int v : adj[u]) {
        if (v == par) continue;
        for (auto [k, v] : dfs(v, u)) cur[k] += v;
      }
      ret[u] = cur[labels[u]];
      return cur;
    };

    dfs(0, -1);
    return ret;
  }
};

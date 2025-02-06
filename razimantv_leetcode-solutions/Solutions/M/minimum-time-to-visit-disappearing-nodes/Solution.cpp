#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-time-to-visit-disappearing-nodes/

class Solution {
 public:
  vector<int> minimumTime(int n, vector<vector<int>>& edges,
                          vector<int>& disappear) {
    vector<vector<pair<int, int>>> adj(n);
    for (auto& e : edges) {
      int u = e[0], v = e[1], w = e[2];
      adj[u].push_back({v, w});
      adj[v].push_back({u, w});
    }

    vector<int> dist(n, -1);
    auto cmp = [&](int i, int j) {
      return make_pair(dist[i], i) < make_pair(dist[j], j);
    };
    set<int, decltype(cmp)> djset(cmp);
    dist[0] = 0;
    djset.insert(0);

    while (!djset.empty()) {
      int u = *djset.begin();
      djset.erase(djset.begin());

      for (auto [v, w] : adj[u]) {
        int vdist = dist[u] + w;
        if (vdist < disappear[v] and (dist[v] == -1 or vdist < dist[v])) {
          if (djset.count(v)) djset.erase(v);
          dist[v] = vdist;
          djset.insert(v);
        }
      }
    }
    return dist;
  }
};

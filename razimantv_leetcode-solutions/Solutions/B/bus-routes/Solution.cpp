#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/bus-routes

class Solution {
 public:
  int numBusesToDestination(vector<vector<int>>& routes, int source,
                            int target) {
    vector<vector<int>> adj(123456);
    for (int i = 0; i < routes.size(); ++i) {
      for (int s : routes[i]) {
        adj[s].push_back(100001 + i);
        adj[100001 + i].push_back(s);
      }
    }

    vector<int> dist(123456);
    dist[source] = 1;
    queue<int> bfsq;
    bfsq.push(source);
    while (!bfsq.empty()) {
      int u = bfsq.front();
      bfsq.pop();
      if (u == target) return dist[u] / 2;

      for (int v : adj[u]) {
        if (!dist[v]) {
          dist[v] = dist[u] + 1;
          bfsq.push(v);
        }
      }
    }
    return -1;
  }
};

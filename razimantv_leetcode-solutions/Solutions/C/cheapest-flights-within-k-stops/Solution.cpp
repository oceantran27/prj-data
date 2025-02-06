#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/cheapest-flights-within-k-stops

class Solution {
 public:
  int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                        int K) {
    vector<vector<pair<int, int>>> adj(n);
    for (auto& edge : flights) {
      int u = edge[0];
      int v = edge[1];
      int w = edge[2];
      adj[u].push_back({v, w});
    }

    const int INF = 1'000'000'000;
    vector<int> mindist(n, INF);
    mindist[src] = 0;
    unordered_set<int> cur{src};

    for (int i = 0; i <= K; ++i) {
      unordered_set<int> next;
      vector<int> nextmindist = mindist;
      for (int u : cur) {
        for (auto [v, w] : adj[u]) {
          if (mindist[u] + w < nextmindist[v]) {
            next.insert(v);
            nextmindist[v] = mindist[u] + w;
          }
        }
      }
      cur = next;
      mindist = nextmindist;
    }
    return mindist[dst] < INF ? mindist[dst] : -1;
  }
};

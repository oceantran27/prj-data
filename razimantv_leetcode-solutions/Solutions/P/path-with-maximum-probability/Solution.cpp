#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/path-with-maximum-probability

class Solution {
 public:
  double maxProbability(int n, vector<vector<int>>& edges,
                        vector<double>& succProb, int start, int end) {
    vector<vector<pair<int, double>>> adj(n);
    for (int i = 0, E = edges.size(); i < E; ++i) {
      auto& e = edges[i];
      adj[e[0]].push_back({e[1], succProb[i]});
      adj[e[1]].push_back({e[0], succProb[i]});
    }

    unordered_map<int, int> bestprob;
    auto cmp = [&](int a, int b) {
      auto probdiff = bestprob[a] - bestprob[b];
      if (probdiff) return probdiff > 0;
      return a < b;
    };

    set<int, decltype(cmp)> djset(cmp);
    bestprob[start] = 1'000'000'000;
    djset.insert(start);

    while (!djset.empty()) {
      int u = *djset.begin();
      djset.erase(djset.begin());

      for (auto [v, w] : adj[u]) {
        int newprob = bestprob[u] * w;
        if (bestprob[v] < newprob) {
          if (djset.count(v)) djset.erase(v);
          bestprob[v] = newprob;
          djset.insert(v);
        }
      }
    }
    return bestprob[end] * 1e-9;
  }
};

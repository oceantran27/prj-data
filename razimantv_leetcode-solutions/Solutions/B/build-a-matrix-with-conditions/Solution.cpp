#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/build-a-matrix-with-conditions/

class Solution {
 public:
  vector<int> toposort(int k, vector<vector<int>>& rules) {
    vector<int> indegree(k);
    vector<vector<int>> adj(k);
    for (auto& rule : rules) {
      int a = rule[0] - 1, b = rule[1] - 1;
      adj[a].push_back(b);
      ++indegree[b];
    }

    vector<int> pos;
    for (int i = 0; i < k; ++i)
      if (!indegree[i]) pos.push_back(i);
    for (int i = 0; i < pos.size(); ++i) {
      for (int v : adj[pos[i]])
        if (!--indegree[v]) pos.push_back(v);
    }
    if (pos.size() < k) return {};

    vector<int> ret(k);
    for (int i = 0; i < k; ++i) ret[pos[i]] = i;
    return ret;
  }
  vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowC,
                                  vector<vector<int>>& colC) {
    vector<int> row = toposort(k, rowC), col = toposort(k, colC);
    if (row.empty() or col.empty()) return {};

    vector<vector<int>> ret(k, vector<int>(k));
    for (int i = 0; i < k; ++i) ret[row[i]][col[i]] = i + 1;
    return ret;
  }
};

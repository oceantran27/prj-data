#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/possible-bipartition

class Solution {
 public:
  bool dfs(int u, int c, const vector<vector<int>>& adj, vector<int>& colour) {
    colour[u] = c;
    for (int v : adj[u])
      if (colour[v] == c)
        return false;
      else if (colour[v] == 0 and !dfs(v, 3 - c, adj, colour))
        return false;
    return true;
  }
  bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
    vector<vector<int>> adj(N);
    for (auto v : dislikes) {
      adj[v[0] - 1].push_back(v[1] - 1);
      adj[v[1] - 1].push_back(v[0] - 1);
    }

    vector<int> colour(N, 0);
    for (int i = 0; i < N; i++) {
      if (colour[i] == 0 and !dfs(i, 1, adj, colour)) return false;
    }
    return true;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/smallest-string-with-swaps

class Solution {
 public:
  vector<vector<int>> adj;
  vector<char> seen;
  vector<int> component;

  void dfs(int u) {
    seen[u] = true;
    component.push_back(u);

    for (int v : adj[u])
      if (!seen[v]) dfs(v);
  }
  string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
    int N = s.size();
    adj = vector<vector<int>>(N);

    for (auto& uv : pairs) {
      adj[uv[0]].push_back(uv[1]);
      adj[uv[1]].push_back(uv[0]);
    }

    seen = vector<char>(N);
    for (int i = 0; i < N; ++i) {
      if (seen[i]) continue;
      component.clear();
      dfs(i);

      sort(component.begin(), component.end());
      int C = component.size();
      vector<char> cur(C);
      for (int i = 0; i < C; ++i) cur[i] = s[component[i]];
      sort(cur.begin(), cur.end());
      for (int i = 0; i < C; ++i) s[component[i]] = cur[i];
    }

    return s;
  }
};

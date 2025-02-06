#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-path-with-different-adjacent-characters

class Solution {
 public:
  vector<vector<int>> adj;
  int best;
  string s;

  int dfs(int u) {
    vector<int> children;
    for (int v : adj[u]) {
      int c = dfs(v);
      if (s[u] != s[v]) children.push_back(c);
    }

    if (children.size() > 1)
      nth_element(children.begin(), children.begin() + 1, children.end(),
                  greater<int>());
    int cur = 1, maxc = 1;
    for (int i = 0; i < 2 and i < children.size(); ++i) {
      cur += children[i];
      maxc = max(maxc, children[i] + 1);
    }
    best = max(best, cur);
    return maxc;
  }
  int longestPath(vector<int>& parent, string s) {
    int n = parent.size();
    this->s = s;
    adj.resize(n);
    best = 0;
    for (int i = 1; i < n; ++i) adj[parent[i]].push_back(i);
    dfs(0);
    return best;
  }
};

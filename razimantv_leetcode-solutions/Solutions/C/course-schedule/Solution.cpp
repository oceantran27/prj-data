#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/course-schedule

class Solution {
 public:
  bool canFinish(int N, vector<vector<int>>& A) {
    vector<vector<int>> adj(N);
    vector<int> deg(N, 0), deg0;
    for (auto e : A) {
      deg[e[0]]++;
      adj[e[1]].push_back(e[0]);
    }
    for (int i = 0; i < N; i++)
      if (deg[i] == 0) deg0.push_back(i);
    int cleaned = 0;
    while (!deg0.empty()) {
      ++cleaned;
      int u = deg0.back();
      deg0.pop_back();
      for (int v : adj[u]) {
        if (--deg[v] == 0) deg0.push_back(v);
      }
    }
    return cleaned == N;
  }
};

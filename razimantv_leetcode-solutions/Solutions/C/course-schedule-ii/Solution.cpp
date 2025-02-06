#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/course-schedule-ii

class Solution {
 public:
  vector<int> findOrder(int N, vector<vector<int>>& P) {
    vector<int> id(N), id0, ret;
    vector<vector<int>> adj(N);
    for (auto p : P) {
      id[p[0]]++;
      adj[p[1]].push_back(p[0]);
    }

    for (int i = 0; i < N; i++)
      if (!id[i]) id0.push_back(i);

    for (int p = 0; p < id0.size(); ++p) {
      int u = id0[p];
      ret.push_back(u);
      for (int v : adj[u])
        if (--id[v] == 0) id0.push_back(v);
    }

    return ret.size() < N ? vector<int>() : ret;
  }
};

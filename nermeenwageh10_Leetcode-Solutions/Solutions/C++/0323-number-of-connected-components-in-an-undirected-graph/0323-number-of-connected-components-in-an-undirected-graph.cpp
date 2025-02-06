#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
  public:
    vector<int> parent;
    int getParent(int u){
      return parent[u] == u? u: parent[u] = getParent(parent[u]);
    }
    void merge(int u, int v){
      u = getParent(u);
      v = getParent(v);
      if (parent[u] != parent[v])
        parent[u] = v;
    }
    int countComponents(int n, vector<vector<int>> edges) {
      parent = vector<int>(n);
      for (int i = 0; i < n; i++)
        parent[i] = i;
      for (int i = 0; i < edges.size(); i++) {
        merge(edges[i][0], edges[i][1]);
      }
      set<int> parents;
      for (int i = 0; i < n; i++) {
        parents.insert(getParent(i));
      }
      return (int) parents.size();
    }
};

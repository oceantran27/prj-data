#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/all-paths-from-source-to-target

class Solution {
  vector<vector<int>> ret;
  vector<int> prefix;

 public:
  vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph,
                                           int start = 0) {
    prefix.push_back(start);
    if (start + 1 == graph.size()) {
      ret.push_back(prefix);
    } else {
      for (int u : graph[start]) allPathsSourceTarget(graph, u);
    }
    prefix.pop_back();
    return start ? vector<vector<int>>() : ret;
  }
};

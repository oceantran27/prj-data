#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reconstruct-itinerary

class Solution {
 public:
  pair<bool, vector<string>> it(map<string, multiset<string>>& adj,
                                string start) {
    if (adj.empty()) return {true, {start}};
    if (adj.count(start) == 0 or adj[start].empty()) return {false, {}};

    multiset<string> cur = adj[start];
    for (auto next : cur) {
      adj[start].erase(adj[start].find(next));
      if (adj[start].empty()) adj.erase(start);
      auto ret = it(adj, next);
      if (ret.first) {
        ret.second.push_back(start);
        return ret;
      }
      adj[start].insert(next);
    }
    return {false, {}};
  }

  vector<string> findItinerary(vector<vector<string>>& tickets) {
    map<string, multiset<string>> adj;
    for (auto e : tickets) adj[e[0]].insert(e[1]);
    auto ret = it(adj, "JFK");
    reverse(ret.second.begin(), ret.second.end());
    return ret.second;
  }
};

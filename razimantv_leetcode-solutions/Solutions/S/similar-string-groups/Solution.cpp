#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/similar-string-groups/

class Solution {
  bool similar(const string& s, const string& t) {
    int bad{};
    for (int i = 0; s[i]; ++i)
      if (s[i] != t[i] and ++bad > 2) return false;
    return true;
  }

 public:
  int numSimilarGroups(vector<string>& strs) {
    int n = strs.size();
    vector<int> par(n);
    iota(par.begin(), par.end(), 0);
    function<int(int)> parent = [&](int u) {
      return (par[u] == u) ? u : (par[u] = parent(par[u]));
    };

    int ret{n};
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < i; ++j) {
        int u = parent(i), v = parent(j);
        if (u != v and similar(strs[i], strs[j])) {
          par[v] = u;
          --ret;
        }
      }
    return ret;
  }
};

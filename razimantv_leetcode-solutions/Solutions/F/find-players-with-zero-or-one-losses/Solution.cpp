#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-players-with-zero-or-one-losses/

class Solution {
 public:
  vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    unordered_map<int, int> cnt;
    for (auto& m : matches) {
      cnt[m[0]];
      cnt[m[1]]++;
    }
    vector<vector<int>> ret(2);
    for (auto& [k, v] : cnt) {
      if (v < 2) ret[v].push_back(k);
    }
    for (auto& r : ret) sort(r.begin(), r.end());
    return ret;
  }
};

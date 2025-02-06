#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-genetic-mutation

class Solution {
 public:
  int minMutation(string start, string end, vector<string>& bank) {
    unordered_set<string> good;
    for (const string& s : bank) good.insert(s);
    if (good.count(start)) good.erase(start);

    queue<pair<string, int>> bfsq;
    bfsq.push({start, 0});
    while (!bfsq.empty()) {
      auto [cur, depth] = bfsq.front();
      bfsq.pop();

      for (int i = 0; i < 8; ++i) {
        char c = cur[i];
        for (char x : "ACGT") {
          cur[i] = x;
          if (good.count(cur)) {
            if (cur == end) return depth + 1;
            bfsq.push({cur, depth + 1});
            good.erase(cur);
          }
        }
        cur[i] = c;
      }
    }
    return -1;
  }
};

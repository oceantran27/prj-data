#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/open-the-lock

class Solution {
 public:
  int openLock(vector<string>& deadends, string target) {
    unordered_map<string, int> depth;
    for (const auto& s : deadends) depth[s] = -1;
    if (depth.count("0000"))
      return -1;
    else if (target == "0000")
      return 0;

    queue<string> bfsq;
    bfsq.push("0000");
    depth["0000"] = 1;
    while (!bfsq.empty()) {
      string cur = bfsq.front();
      bfsq.pop();
      int l = depth[cur];

      string temp = cur;
      for (int i = 0; i < 4; ++i) {
        temp[i] = (cur[i] == '0') ? '9' : (cur[i] - 1);
        if (!depth.count(temp)) {
          if (temp == target) return l;
          depth[temp] = l + 1;
          bfsq.push(temp);
        }
        temp[i] = (cur[i] == '9') ? '0' : (cur[i] + 1);
        if (!depth.count(temp)) {
          if (temp == target) return l;
          depth[temp] = l + 1;
          bfsq.push(temp);
        }
        temp[i] = cur[i];
      }
    }
    return -1;
  }
};

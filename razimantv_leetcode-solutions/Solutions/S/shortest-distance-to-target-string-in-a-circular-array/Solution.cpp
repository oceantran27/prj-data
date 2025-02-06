#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/

class Solution {
 public:
  int closetTarget(vector<string>& words, string target, int start) {
    int n = words.size(), ret = n;
    for (int i = 0; i < n; ++i) {
      if (words[i] != target) continue;
      int cur = abs(i - start);
      ret = min(ret, min(cur, n - cur));
    }
    return ret == n ? -1 : ret;
  }
};

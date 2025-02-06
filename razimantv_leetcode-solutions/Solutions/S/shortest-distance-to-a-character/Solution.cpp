#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/shortest-distance-to-a-character

class Solution {
 public:
  vector<int> shortestToChar(string s, char c) {
    int n = s.size();
    vector<int> ret(n);

    for (int i = 0, prev = -n; i < n; ++i) {
      if (s[i] == c) prev = i;
      ret[i] = i - prev;
    }
    for (int i = n - 1, prev = 2 * n; i >= 0; --i) {
      if (s[i] == c) prev = i;
      ret[i] = min(ret[i], prev - i);
    }
    return ret;
  }
};

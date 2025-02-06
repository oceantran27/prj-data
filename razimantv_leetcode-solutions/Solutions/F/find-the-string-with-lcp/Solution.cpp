#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-the-string-with-lcp/

class Solution {
 public:
  string findTheString(vector<vector<int>>& lcp) {
    int n = lcp.size();
    string ret(n, ' ');
    for (int i = 0, next = 'a'; i < n; ++i) {
      if (ret[i] == ' ') {
        if (next > 'z') return "";
        ret[i] = next++;
      }

      for (int j = i + 1; j < n; ++j)
        if (lcp[i][j]) ret[j] = ret[i];
    }

    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j) {
        if (ret[i] == ret[j] and
            lcp[i][j] !=
                1 + ((i < n - 1 and j < n - 1) ? lcp[i + 1][j + 1] : 0))
          return "";
        if (ret[i] != ret[j] and lcp[i][j]) return "";
      }
    return ret;
  }
};

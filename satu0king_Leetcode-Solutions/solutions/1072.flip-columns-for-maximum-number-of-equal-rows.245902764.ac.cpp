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
  int maxEqualRowsAfterFlips(vector<vector<int>> &matrix) {
    map<vector<int>, int> count;
    for (auto &v : matrix) {
      count[v]++;
      flip(v);
      count[v]++;
    }
    int mx = 0;
    for (auto &p : count)
      mx = max(mx, p.second);
    return mx;
  }

  void flip(vector<int> &v) {
    for (int &n : v)
      n ^= 1;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/increment-submatrices-by-on
class Solution {
 public:
  vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
    vector<vector<int>> ret(n, vector<int>(n));
    for (auto& q : queries) {
      int r1 = q[0], c1 = q[1], r2 = q[2], c2 = q[3];
      ret[r2][c2]++;
      if (r1) ret[r1 - 1][c2]--;
      if (c1) ret[r2][c1 - 1]--;
      if (r1 and c1) ret[r1 - 1][c1 - 1]++;
    }

    for (int i = 0; i < n; ++i)
      for (int j = n - 2; j >= 0; j--) ret[i][j] += ret[i][j + 1];
    for (int i = n - 2; i >= 0; --i)
      for (int j = 0; j < n; ++j) ret[i][j] += ret[i + 1][j];

    return ret;
  }
};

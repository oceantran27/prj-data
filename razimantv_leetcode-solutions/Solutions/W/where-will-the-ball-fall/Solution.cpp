#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/where-will-the-ball-fall

class Solution {
public:
  vector<int> findBall(vector<vector<int>> &grid) {
    int m = grid.size(), n = grid[0].size();
    vector<int> ret(n, -1);

    for (int c = 0; c < n; ++c) {
      int j = c;
      for (int i = 0; i < m; ++i) {
        int jj = j + grid[i][j];
        if (jj == -1 or jj == n or grid[i][jj] != grid[i][j])
          goto BPP;
        j = jj;
      }
      ret[c] = j;
    BPP:;
    }
    return ret;
  }
};

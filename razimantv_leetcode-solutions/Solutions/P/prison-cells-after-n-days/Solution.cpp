#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/prison-cells-after-n-days

class Solution {
 public:
  vector<int> prisonAfterNDays(vector<int>& cells, int N) {
    int start = 0;
    for (int c : cells) start = (start << 1) | c;

    int next[2][256];
    memset(next, -1, sizeof next);

    int mask = start;
    while (next[0][mask] == -1) {
      next[0][mask] = ((mask >> 1) ^ (mask << 1) ^ 126) & 126;
      mask = next[0][mask];
    }

    for (int i = 0; N; N >>= 1, i ^= 1) {
      if (N & 1) start = next[i][start];
      for (int j = 0; j < 256; ++j)
        if (next[i][j] != -1) next[i ^ 1][j] = next[i][next[i][j]];
    }

    vector<int> ret(8);
    for (int i = 0; i < 8; ++i) {
      ret[7 - i] = start & 1;
      start >>= 1;
    }
    return ret;
  }
};

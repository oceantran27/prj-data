#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reshape-the-matrix

class Solution {
 public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size(), n = mat[0].size();
    if ((m == r and n == c) or (m * n != r * c)) return mat;

    vector<vector<int>> ret(r, vector<int>(c));
    for (int i = 0, ii = 0, jj = 0; i < r; ++i)
      for (int j = 0; j < c; ++j, ++jj) {
        if (jj == n) jj = 0, ++ii;
        ret[i][j] = mat[ii][jj];
      }
    return ret;
  }
};

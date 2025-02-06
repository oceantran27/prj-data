#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
 public:
  int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size(), ret = -(n & 1) * mat[n / 2][n / 2];
    for (int i = 0, j = n - 1; i < n; ++i, --j) ret += mat[i][i] + mat[i][j];
    return ret;
  }
};

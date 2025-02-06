#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-square-submatrices-with-all-ones

class Solution {
 public:
  int countSquares(vector<vector<int>>& matrix) {
    int ret = 0;
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[0].size(); j++) {
        if (i > 0 and j > 0 and matrix[i][j])
          matrix[i][j] += min(min(matrix[i - 1][j], matrix[i][j - 1]),
                              matrix[i - 1][j - 1]);
        ret += matrix[i][j];
      }
    }
    return ret;
  }
};

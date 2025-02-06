#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/search-a-2d-matrix-ii

class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (int i = 0, m = matrix.size(), n = matrix[0].size(), j = n - 1;
         i < m and j >= 0; ++i) {
      while (j >= 0 and matrix[i][j] > target) --j;
      if (j >= 0 and matrix[i][j] == target) return true;
    }
    return false;
  }
};

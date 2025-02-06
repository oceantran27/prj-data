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
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
      return false;
    }
    int m = matrix.size();
    int n = matrix[0].size();
    int i = m - 1;
    int j = 0;
    while (i >= 0 && j <= n - 1) {
      if (matrix[i][j] == target) {
        return true;
      } else if (matrix[i][j] < target) {
        ++j;
      } else {
        --i;
      }
    }
    return false;
  }
};

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
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int n = matrix.size();
    if (!n)
      return 0;
    int m = matrix[0].size();

    int i = 0;
    int j = m - 1;

    while (i < n && j >= 0) {
      if (target > matrix[i][j])
        i++;
      else if (target < matrix[i][j])
        j--;
      else
        return true;
    }
    return false;
  }
};

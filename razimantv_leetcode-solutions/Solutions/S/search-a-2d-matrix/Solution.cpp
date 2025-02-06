#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (auto& r : matrix)
      for (int i : r)
        if (i == target) return true;
    return false;
  }
};

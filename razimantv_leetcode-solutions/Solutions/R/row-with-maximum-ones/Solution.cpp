#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/row-with-maximum-ones/

class Solution {
 public:
  vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
    int pos, val{-1};
    for (int i = 0, n = mat.size(); i < n; ++i) {
      int cur = accumulate(mat[i].begin(), mat[i].end(), 0);
      if (cur > val) val = cur, pos = i;
    }
    return {pos, val};
  }
};

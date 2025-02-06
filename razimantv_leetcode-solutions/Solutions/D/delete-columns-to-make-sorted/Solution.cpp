#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
 public:
  int minDeletionSize(vector<string>& strs) {
    int m = strs.size(), n = strs[0].size();
    int ret{};
    for (int c = 0; c < n; ++c) {
      for (int i = 1; i < m; ++i)
        if (strs[i][c] < strs[i - 1][c]) {
          ++ret;
          break;
        }
    }
    return ret;
  }
};

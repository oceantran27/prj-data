#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/check-completeness-of-a-binary-tree/

class Solution {
 public:
  tuple<bool, int, int> dfs(TreeNode* node) {
    if (!node) return {true, 0, 0};
    auto [lflag, lmax, lmin] = dfs(node->left);
    if (!lflag) return {false, -1, -1};
    auto [rflag, rmax, rmin] = dfs(node->right);
    if (!rflag) return {false, -1, -1};

    vector<int> vec{lmax, lmin, rmax, rmin};
    for (int i = 1, unequal = 0; i < 4; ++i) {
      if (vec[i] == vec[i - 1]) {
      } else if ((vec[i] != vec[i - 1] - 1) or unequal)
        return {false, -1, -1};
      else
        unequal = 1;
    }
    return {true, lmax + 1, rmin + 1};
  }
  bool isCompleteTree(TreeNode* root) { return get<0>(dfs(root)); }
};

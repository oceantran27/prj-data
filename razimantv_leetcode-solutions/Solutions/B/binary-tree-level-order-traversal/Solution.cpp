#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/binary-tree-level-order-traversal

class Solution {
 public:
  vector<vector<int>> ret;
  vector<vector<int>> levelOrder(TreeNode* root, int level = 0) {
    if (!root) return {};
    if (ret.size() == level) ret.push_back({});
    ret[level].push_back(root->val);
    levelOrder(root->left, level + 1);
    levelOrder(root->right, level + 1);

    if (level == 0)
      return ret;
    else
      return {};
  }
};

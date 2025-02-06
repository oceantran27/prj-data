#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

class Solution {
  vector<vector<int>> ans;

 public:
  vector<vector<int>> zigzagLevelOrder(TreeNode* root, int level = 0) {
    if (root == NULL) return {};
    if (!level) ans.clear();
    if (level == ans.size()) ans.push_back({});
    ans[level].push_back(root->val);
    if (root->left != NULL) zigzagLevelOrder(root->left, level + 1);
    if (root->right != NULL) zigzagLevelOrder(root->right, level + 1);
    if (!level) {
      for (int i = 1; i < ans.size(); i += 2)
        reverse(ans[i].begin(), ans[i].end());
      return ans;
    }
    return {{}};
  }
};

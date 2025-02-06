#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/cousins-in-binary-tree-ii/

class Solution {
 public:
  vector<int> dsum;
  void dfs(TreeNode* node, int depth) {
    if (!node) return;
    if (depth == dsum.size()) dsum.push_back(0);
    dsum[depth] += node->val;
    dfs(node->left, depth + 1);
    dfs(node->right, depth + 1);
  }

  void dfs2(TreeNode* node, int depth, int sub) {
    if (!node) return;
    node->val = dsum[depth] - sub;
    sub = 0;
    vector<TreeNode*> children{node->left, node->right};
    for (auto child : children)
      if (child) sub += child->val;
    for (auto child : children) dfs2(child, depth + 1, sub);
  }
  TreeNode* replaceValueInTree(TreeNode* root) {
    dfs(root, 0);
    dfs2(root, 0, root->val);
    return root;
  }
};

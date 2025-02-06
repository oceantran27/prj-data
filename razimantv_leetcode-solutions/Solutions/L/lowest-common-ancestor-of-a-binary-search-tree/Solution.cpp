#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree


class Solution {
 public:
  bool has(TreeNode* root, TreeNode* n) {
    if (!root)
      return false;
    else if (root == n)
      return true;
    else
      return has(root->left, n) or has(root->right, n);
  }
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root == p or root == q) return root;
    bool lp = has(root->left, p), lq = has(root->left, q);
    if (lp != lq)
      return root;
    else if (lp)
      return lowestCommonAncestor(root->left, p, q);
    else
      return lowestCommonAncestor(root->right, p, q);
  }
};

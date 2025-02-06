#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/validate-binary-search-tree

class Solution {
 public:
  bool isValidBST(TreeNode* root, TreeNode* l = nullptr,
                  TreeNode* r = nullptr) {
    if (l != nullptr and root->val <= l->val) return false;
    if (r != nullptr and root->val >= r->val) return false;
    if (root->left != nullptr and !isValidBST(root->left, l, root))
      return false;
    if (root->right != nullptr and !isValidBST(root->right, root, r))
      return false;
    return true;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/binary-tree-pruning

class Solution {
 public:
  TreeNode* pruneTree(TreeNode* root) {
    if (!root) return root;
    root->left = pruneTree(root->left);
    root->right = pruneTree(root->right);
    return (root->left or root->right or root->val) ? root : nullptr;
  }
};

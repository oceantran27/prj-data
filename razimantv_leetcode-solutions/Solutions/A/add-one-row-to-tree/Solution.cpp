#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/add-one-row-to-tree

class Solution {
 public:
  TreeNode* addOneRow(TreeNode* root, int v, int d, int type = 0) {
    if (d == 1) {
      if (type == 0)
        return new TreeNode(v, root, nullptr);
      else if (type == 1)
        return root = new TreeNode(v, root, nullptr);
      else
        root = new TreeNode(v, nullptr, root);
      return root;
    }
    if (root == nullptr) return nullptr;
    root->left = addOneRow(root->left, v, d - 1, 1);
    root->right = addOneRow(root->right, v, d - 1, 2);
    return root;
  }
};

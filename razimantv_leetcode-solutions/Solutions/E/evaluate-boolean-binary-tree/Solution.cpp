#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/evaluate-boolean-binary-tree

class Solution {
 public:
  bool evaluateTree(TreeNode* root) {
    if (!root->left)
      return root->val;
    else if (root->val == 2)
      return evaluateTree(root->left) or evaluateTree(root->right);
    else
      return evaluateTree(root->left) and evaluateTree(root->right);
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/subtree-of-another-tree

class Solution {
 public:
  bool isEqual(TreeNode* root, TreeNode* sub) {
    if (!root and !sub) return true;
    if (!root or !sub) return false;
    return root->val == sub->val and isEqual(root->left, sub->left) and
           isEqual(root->right, sub->right);
  }
  bool isSubtree(TreeNode* root, TreeNode* sub) {
    if (!root) return false;
    if (isSubtree(root->left, sub) or isSubtree(root->right, sub)) return true;
    return root->val == sub->val and isEqual(root, sub);
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
 public:
  bool evaluateTree(TreeNode* root) {
    if (root->val == 0) return false;
    if (root->val == 1) return true;
    if (root->val == 2)
      return evaluateTree(root->left) || evaluateTree(root->right);
    return evaluateTree(root->left) && evaluateTree(root->right);
  }
};
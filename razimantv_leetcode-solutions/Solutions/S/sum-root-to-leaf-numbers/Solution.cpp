#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-root-to-leaf-numbers

class Solution {
 public:
  int sumNumbers(TreeNode* root, int pref = 0) {
    if (root == NULL) return 0;
    if (root->left == NULL and root->right == NULL)
      return pref * 10 + root->val;
    int ret = 0;
    if (root->right != NULL)
      ret += sumNumbers(root->right, pref * 10 + root->val);
    if (root->left != NULL)
      ret += sumNumbers(root->left, pref * 10 + root->val);
    return ret;
  }
};

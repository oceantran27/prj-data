#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/sum-of-left-leaves

class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root, bool left = false) {
    if (root == NULL) return 0;
    int ret = 0;
    if (left and root->left == NULL and root->right == NULL) return root->val;
    if (root->left != NULL) ret += sumOfLeftLeaves(root->left, true);
    if (root->right != NULL) ret += sumOfLeftLeaves(root->right, false);
    return ret;
  }
};

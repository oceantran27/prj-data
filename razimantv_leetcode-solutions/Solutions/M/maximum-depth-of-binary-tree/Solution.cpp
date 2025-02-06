#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-depth-of-binary-tree

class Solution {
 public:
  int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0;
    int ret = 1;
    if (root->left != nullptr) ret = max(ret, maxDepth(root->left) + 1);
    if (root->right != nullptr) ret = max(ret, maxDepth(root->right) + 1);
    return ret;
  }
};

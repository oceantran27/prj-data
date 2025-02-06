#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/trim-a-binary-search-tree

class Solution {
 public:
  TreeNode* trimBST(TreeNode* root, int low, int high) {
    if (root == nullptr) return root;
    if (root->val < low)
      return trimBST(root->right, low, high);
    else if (root->val > high)
      return trimBST(root->left, low, high);
    else {
      root->left = trimBST(root->left, low, high);
      root->right = trimBST(root->right, low, high);
    }
    return root;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/path-sum

class Solution {
 public:
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    targetSum -= root->val;
    if (!targetSum and !root->left and !root->right) return true;
    return hasPathSum(root->left, targetSum) or
           hasPathSum(root->right, targetSum);
  }
};

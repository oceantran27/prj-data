#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  vector<int> ans;
  void inorderTraversalUtil(TreeNode *root) {
    if (root == NULL)
      return;
    inorderTraversalUtil(root->left);
    ans.push_back(root->val);
    inorderTraversalUtil(root->right);
  }
  vector<int> inorderTraversal(TreeNode *root) {
    inorderTraversalUtil(root);
    return ans;
  }
};

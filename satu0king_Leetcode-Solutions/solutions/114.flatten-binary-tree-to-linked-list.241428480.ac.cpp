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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  void flatten(TreeNode *root) {
    if (!root)
      return;
    flatten(root->right);
    flatten(root->left);
    root->right = insert(root->left, root->right);
    root->left = NULL;
  }
  TreeNode *insert(TreeNode *tree, TreeNode *node) {
    if (!tree)
      return node;
    if (!node)
      return tree;

    TreeNode *temp = tree;
    while (temp->right)
      temp = temp->right;
    temp->right = node;
    return tree;
  }
};

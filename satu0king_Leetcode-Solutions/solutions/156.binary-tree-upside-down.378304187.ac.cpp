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
  TreeNode *upsideDownBinaryTree(TreeNode *root) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
      return root;
    }

    TreeNode *newRoot = upsideDownBinaryTree(root->left);
    TreeNode *leftRoot = root->left;
    leftRoot->left = root->right;
    leftRoot->right = root;
    root->left = root->right = NULL;
    return newRoot;
  }
};

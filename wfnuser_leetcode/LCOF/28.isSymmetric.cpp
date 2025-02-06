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

    bool isSymmetricPair(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL) return true;
        if (left != NULL && right == NULL) return false;
        if (left == NULL && right != NULL) return false;
        if (left->val != right ->val) return false;

        return isSymmetricPair(left->left, right->right) && isSymmetricPair(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        return isSymmetricPair(root->left,root->right);
    }
};
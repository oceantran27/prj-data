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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        dfs(root, val);
        return root;
    }
    
    void dfs(TreeNode*& root, int val) {
        if (!root) {
            root = new TreeNode(val);
            return;
        }
        if (root->val > val) {
            dfs(root->left, val);
        } else {
            dfs(root->right, val);
        }
    }
};

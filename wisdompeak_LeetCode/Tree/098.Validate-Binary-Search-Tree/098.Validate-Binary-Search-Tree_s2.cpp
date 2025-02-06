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
    bool isValidBST(TreeNode* root) 
    {
        if (root==NULL) return true;
        
        TreeNode* node;
        
        if (root->left!=NULL)
        {
            node=root->left;
            while (node->right!=NULL)
                node=node->right;
            if (node->val>=root->val)
                return false;
        }
        
        if (root->right!=NULL)
        {
            node=root->right;
            while (node->left!=NULL)
                node=node->left;
            if (node->val<=root->val)
                return false;
        }        
        
        return isValidBST(root->left)&&isValidBST(root->right);
    }
};

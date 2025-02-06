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
    TreeNode* invertTree(TreeNode* root) {
        /*
        if(root == NULL)
            return root;
        queue<TreeNode*> q;
        q.push(root);
        //迭代的交换左右子节点
        while(!q.empty()){
            TreeNode* curNode = q.front();
            q.pop();
            //保存左节点
            TreeNode* curLeft = curNode->left;
            //交换左右子节点
            curNode->left = curNode->right;
            curNode->right = curLeft;
            if(curNode->left)
                q.push(curNode->left);
            if(curNode->right)
                q.push(curNode->right);
        }
        return root;
        */
        if(root == nullptr)
            return root;
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

TreeNode* newNode(int data) {
    TreeNode* node = new TreeNode(data);
    return node;
}

TreeNode* constructTree(int val, TreeNode *root) {
    if(root == NULL)
        root = newNode(val);
    else if(val < root->val)
        root->left = constructTree(val, root->left);
    else
        root->right = constructTree(val, root->right);
    return root;
}


class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root = new TreeNode(preorder[0]);
        for(int i = 1; i < preorder.size(); i++) {
            root = constructTree(preorder[i], root);
        }
        return root;
    }
};

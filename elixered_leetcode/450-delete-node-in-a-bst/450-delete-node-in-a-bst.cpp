#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(key<root->val)
            root->left = deleteNode(root->left,key);
        else if(key>root->val)
            root->right = deleteNode(root->right,key);
        else{
            if(root->left==NULL && root->right==NULL){
                delete root;
                root = NULL;
            }
            else if(root->right==NULL){
                TreeNode* curr = root;
                root = root->left;
                delete curr;
            }
            else if(root->left==NULL){
                TreeNode* curr = root;
                root = root->right;
                delete curr;
            }
            else{
                TreeNode* right = root->right;
                while(right->left) right = right->left;
                root->val = right->val;
                root->right = deleteNode(root->right,right->val);
            }
        }
        return root;
    }
};
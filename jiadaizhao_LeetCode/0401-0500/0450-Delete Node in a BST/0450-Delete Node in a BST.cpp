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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode dummy(-1);
        dummy.left = root;
        TreeNode* parent = &dummy;
        TreeNode* p = root;
        while (p) {
            if (p->val == key) {
                break;
            }
            
            parent = p;
            if (p->val < key) {
                p = p->right;
            }
            else {
                p = p->left;
            }
        }
        
        if (p == nullptr) {
            return dummy.left;
        }
        
        if (p->right == nullptr) {
            if (parent->left == p) {
                parent->left = p->left;
            }
            else {
                parent->right = p->left;
            }
            delete p;
        }
        else if (p->right->left == nullptr) {
            if (parent->left == p) {
                parent->left = p->right;
            }
            else {
                parent->right = p->right;
            }
            p->right->left = p->left;
            delete p;
        }
        else {
            parent = p->right;
            TreeNode* curr = parent->left;
            while (curr->left) {
                parent = curr;
                curr = curr->left;
            }
            p->val = curr->val;
            parent->left = curr->right;
            delete curr;
        }
        
        return dummy.left;
    }
};

// Recursive Method
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) {
            return nullptr;
        }
        if (root->val < key) {
            root->right = deleteNode(root->right, key);
        }
        else if (root->val > key) {
            root->left = deleteNode(root->left, key);
        }
        else {
            TreeNode* result = nullptr;
            if (root->left == nullptr) {
                result = root->right;
                delete root;
                return result;
            }
            else if (root->right == nullptr) {
                result = root->left;
                delete root;
                return result;
            }
            TreeNode* node = findMin(root->right);
            root->val = node->val;
            root->right = deleteNode(root->right, root->val);
        }
        return root;
    }
    
private:
    TreeNode* findMin(TreeNode* node) {
        while (node->left) {
            node = node->left;
        }
        return node;
    }
};

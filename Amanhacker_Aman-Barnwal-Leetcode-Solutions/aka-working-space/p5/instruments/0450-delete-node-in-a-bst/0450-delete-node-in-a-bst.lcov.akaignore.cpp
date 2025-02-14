/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0450_DELETE_NODE_IN_A_BST_0450_DELETE_NODE_IN_A_BST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0450_DELETE_NODE_IN_A_BST_0450_DELETE_NODE_IN_A_BST_CPP
#include <string>
#include <string.h>
#include <vector>
extern "C++" int AKA_mark(char* str);
extern "C++" void AKA_assert(char* actualName, int actualVal, char* expectedName, int expectedVal);
extern "C++" int AKA_assert_double(char* actualName, double actualVal, char* expectedName, double expectedVal);
extern "C++" int AKA_assert_ptr(char* actualName, void* actualVal, char* expectedName, void* expectedVal);
extern "C++" int AKA_fCall;
extern "C++" char* AKA_test_case_name;



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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
 };

class Solution {
public:
public:
    
    TreeNode* deleteNode(TreeNode* root, int key) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        if(root == NULL)                        return NULL;
        
        else {
            
            // First find the node having value "key" and then delete the node
            
            if(key < root->val)                 root->left  = deleteNode(root->left, key);
            else if(key > root->val)            root->right = deleteNode(root->right, key);
            
            else {
                
                // Now, key is found
                
                if(root->left == NULL && root->right == NULL)           return NULL;
                
                else if(root->left == NULL || root->right == NULL) {
                    return root->left ? root->left : root->right;
                }
                
                else {
                    
                    // Root node having value "key" has both children
                    
                    TreeNode* temp = root->left;
                    
                    // Replace root value with greatest element in left subtree
                    while(temp->right != NULL)                      temp = temp->right;
                    
                    root->val = temp->val;
                    
                    // Now, delete greatest element node in left subtree since key is already replaced
                    root->left = deleteNode(root->left, temp->val);
                }
            }
        }
        
        return root;
    }
    
};
#endif

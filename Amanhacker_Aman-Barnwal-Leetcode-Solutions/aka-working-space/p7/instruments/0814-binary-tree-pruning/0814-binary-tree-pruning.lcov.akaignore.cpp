/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0814_BINARY_TREE_PRUNING_0814_BINARY_TREE_PRUNING_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0814_BINARY_TREE_PRUNING_0814_BINARY_TREE_PRUNING_CPP
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
    
    // Checks whether the subtree contains 1 or not
    // Return true if it contains 1, else return false
    
    // If it does not contain 1. then delete that node
    bool pruneHelper(TreeNode* &root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                                return false;
        
        // Check if any node in the left and right subtree contains a 1.
        bool leftPruneTree = pruneHelper(root->left);
        bool rightPruneTree = pruneHelper(root->right);
        
        // If the left subtree does not contain a 1, prune the subtree.
        if(leftPruneTree == false)                       root->left = NULL;
        
        // If the right subtree does not contain a 1, prune the subtree.
        if(rightPruneTree == false)                      root->right = NULL;
        
        return (root->val == 1) || leftPruneTree || rightPruneTree;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                        return root;
        
        bool flag = pruneHelper(root);
        
        if(flag == true)                        return root;
        else                                    return NULL;
    }
    
};
#endif

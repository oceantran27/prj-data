/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0968_BINARY_TREE_CAMERAS_0968_BINARY_TREE_CAMERAS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0968_BINARY_TREE_CAMERAS_0968_BINARY_TREE_CAMERAS_CPP
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

    void dfs(TreeNode* node, TreeNode* par, int &camCount, set<TreeNode*> &covered) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(node == NULL)                        return;
        
        if(node != NULL) {
            
            dfs(node->left, node, camCount, covered);
            dfs(node->right, node, camCount, covered);
            
            // Here, you go to bottom level of the tree
            
            // Check if I need to add camera at node
            
            // if (par is NULL && node is uncovered) || any of left or right node is uncovered
            if( (par == NULL && covered.find(node) == covered.end()) || 
                covered.find(node->left) == covered.end() || 
                covered.find(node->right) == covered.end() ) {
                
                camCount++;
                
                // Cover node, par, and its left and right child
                covered.insert(node);
                covered.insert(par);
                covered.insert(node->left);
                covered.insert(node->right);
            }
        }
        
        return;
    }
    
    int minCameraCover(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        int camCount = 0;
        set<TreeNode*> covered;
        
        if(root == NULL)                        return camCount;
    
        covered.insert(NULL);
        
        dfs(root, NULL, camCount, covered);
        return camCount;
    }
    
};

#endif

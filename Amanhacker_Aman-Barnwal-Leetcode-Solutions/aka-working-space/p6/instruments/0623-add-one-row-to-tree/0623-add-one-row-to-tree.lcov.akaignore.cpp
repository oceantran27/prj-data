/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0623_ADD_ONE_ROW_TO_TREE_0623_ADD_ONE_ROW_TO_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0623_ADD_ONE_ROW_TO_TREE_0623_ADD_ONE_ROW_TO_TREE_CPP
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
    
    void insert(TreeNode* &node, int val, int d, int curDepth) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(node == NULL)                        return;
        
        if(curDepth == d - 1) {
            
            // Here, we need to insert the node having value val
            
            // For left node
            TreeNode* temp = node->left;
            node->left = new TreeNode(val);
            node->left->left = temp;
            
            // For right node
            temp = node->right;
            node->right = new TreeNode(val);
            node->right->right = temp;
        }
        
        else {
            
            insert(node->left, val, d, curDepth + 1);
            insert(node->right, val, d, curDepth + 1);
        }
        
        return;
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        if(d == 1) {
            
            TreeNode* node = new TreeNode(val);
            node->left = root;
            
            return node;
        }
        
        insert(root, val, d, 1);
        return root;
    }
    
};
#endif

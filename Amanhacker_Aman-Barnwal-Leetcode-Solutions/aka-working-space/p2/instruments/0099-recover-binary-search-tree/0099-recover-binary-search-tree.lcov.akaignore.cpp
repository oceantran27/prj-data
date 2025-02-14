/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0099_RECOVER_BINARY_SEARCH_TREE_0099_RECOVER_BINARY_SEARCH_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0099_RECOVER_BINARY_SEARCH_TREE_0099_RECOVER_BINARY_SEARCH_TREE_CPP
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
    
    
    void inorder(TreeNode* root, vector<TreeNode*> &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                    return;
        
        // inorder means left -> root -> right
        
        inorder(root->left, res);
        res.push_back(root);
        inorder(root->right, res);
        
        return;
    }
    
    void recoverTree(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        if(root == NULL)                                return;
        
        vector<TreeNode*> res;
        inorder(root, res);

        // Ideally, inorder of BST gives us the nodes in strictly increasing order
        
        // But, in this swapped BST, the position of two BST are wrong
        // So, find those dip, and take the 1st node of 1st dip and 2nd node of 2nd dip
        
        int n = res.size();
        
        TreeNode* node1 = NULL, *node2 = NULL;
        
        for(int i=1; i<n; i++) {
            
            // If a dip is found
            if(res[i-1]->val > res[i]->val) {
                
                if(node1 == NULL)                      node1 = res[i-1];
                node2 = res[i];
            }
        }
        
        swap(node1->val, node2->val);
        return;
    }
    
};
#endif

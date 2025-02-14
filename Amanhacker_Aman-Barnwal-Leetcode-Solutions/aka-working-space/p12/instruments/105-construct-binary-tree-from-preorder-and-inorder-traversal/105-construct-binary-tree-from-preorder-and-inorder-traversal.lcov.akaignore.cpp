/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P12_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_105_CONSTRUCT_BINARY_TREE_FROM_PREORDER_AND_INORDER_TRAVERSAL_CPP
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

    TreeNode* buildTreeHelper(vector<int> preorder, vector<int> inorder, int preStart, int preEnd, int inStart, int inEnd) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        // Base Condition
        if(preStart > preEnd || inStart > inEnd)                        return NULL;
        
        int preLeftStart, preLeftEnd, inLeftStart, inLeftEnd;
        int preRightStart, preRightEnd, inRightStart, inRightEnd;
        
        // preorder means root -> left -> right
        // inorder means left -> root -> right
        
        TreeNode* root = new TreeNode(preorder[preStart]);
        
        // Find index of root in inorder
        int rootIndex;
        
        for(int i=inStart; i<=inEnd; i++) {
            if(inorder[i] == root->val) {
                rootIndex = i;
                break;
            }
        }
        
        inLeftStart = inStart;
        inRightEnd = inEnd;
        
        inLeftEnd = rootIndex - 1;
        inRightStart = rootIndex + 1;
        
        preLeftStart = preStart + 1;
        preRightEnd = preEnd;

        // preLeftEnd - preLeftStart = inLeftEnd - inLeftStart
        preLeftEnd = preLeftStart + inLeftEnd - inLeftStart;
        preRightStart = preLeftEnd + 1;
      
        root->left = buildTreeHelper(preorder, inorder, preLeftStart, preLeftEnd, inLeftStart, inLeftEnd);
        root->right = buildTreeHelper(preorder, inorder, preRightStart, preRightEnd, inRightStart, inRightEnd);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        TreeNode* root = NULL;
        
        int n = preorder.size();
        
        if(n == 0)                                          return root;
        
        // preorder means root -> left -> right
        // inorder means left -> root -> right
        
        root = buildTreeHelper(preorder, inorder, 0, n-1, 0, n-1);
        return root;
    }
    
};
#endif

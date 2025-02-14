/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_102_BINARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
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
    
    vector<vector<int>> levelOrder(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<vector<int>> res;
        
        if(root == NULL)                    return res;
        
        vector<int> path;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(q.empty() == false) {
            
            int n = q.size();
            
            // All nodes at one level
            for(int i=0; i<n; i++) {
                
                TreeNode* temp = q.front();
                q.pop();
                
                path.push_back(temp->val);
                
                if(temp->left != NULL)           q.push(temp->left);
                if(temp->right != NULL)          q.push(temp->right);
            }
            
            res.push_back(path);
            path.clear();
        }
        
        
        return res;
    }
    
};
#endif

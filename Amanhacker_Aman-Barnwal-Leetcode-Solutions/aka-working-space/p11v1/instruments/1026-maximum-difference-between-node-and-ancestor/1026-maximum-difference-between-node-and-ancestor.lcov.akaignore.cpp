/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P11_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_1026_MAXIMUM_DIFFERENCE_BETWEEN_NODE_AND_ANCESTOR_CPP
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

    void findMinMax(TreeNode* root, TreeNode* node, int &mini, int &maxi) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(node == NULL)                            return;
        
        // For any node in the subtree of root node
        if(node != root) {
            mini = min(mini, node->val);
            maxi = max(maxi, node->val);
        }
        
        findMinMax(root, node->left, mini, maxi);
        findMinMax(root, node->right, mini, maxi);
        
        return;
    }
    
    bool isLeafNode(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        return (root->left == NULL && root->right == NULL);
    }
    
    // For each node, find the min and max value of its descendants of its subtree
    
    void dfs(TreeNode* root, int &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        int mini = INT_MAX, maxi = INT_MIN;
        
        if(isLeafNode(root) == false) {
           
            findMinMax(root, root, mini, maxi);
            
            int diff = max( abs(root->val - maxi), abs(root->val - mini) );
            res = max(res, diff);
        }
        
        dfs(root->left, res);
        dfs(root->right, res);
        
        return;
    }
    
    int maxAncestorDiff(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int res = INT_MIN;
        
        if(root == NULL)                            return res;
        
        dfs(root, res);
        
        return res;
    }
    
};
#endif

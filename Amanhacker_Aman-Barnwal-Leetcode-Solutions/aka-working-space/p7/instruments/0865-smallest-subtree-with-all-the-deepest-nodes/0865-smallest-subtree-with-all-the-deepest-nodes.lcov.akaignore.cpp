/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_0865_SMALLEST_SUBTREE_WITH_ALL_THE_DEEPEST_NODES_CPP
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
    
    void bfs(TreeNode* root, vector<TreeNode*> &deepest) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() == false) {
            
            int n = q.size();
            deepest.clear();
            
            while(n--) {
                
                TreeNode* temp = q.front();
                q.pop();
                
                deepest.push_back(temp);
                
                if(temp->left != NULL)              q.push(temp->left);
                if(temp->right != NULL)             q.push(temp->right);
            }
        }
        
        return;
    }
    
    TreeNode* findLCA(TreeNode* root, TreeNode* l, TreeNode* r) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                                        return NULL;
        
        if(root->val == l->val || root->val == r->val)          return root;
        
        TreeNode* left = findLCA(root->left, l, r);
        TreeNode* right = findLCA(root->right, l, r);
        
        if(left != NULL && right != NULL)                       return root;
        
        if(left != NULL)                                        return left;
        else                                                    return right;
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        if(root == NULL)                            return NULL;
        
        // Find all deepest node and find the lca of all
        
        vector<TreeNode*> deepest;
        bfs(root, deepest);
        
        int n = deepest.size();
        
        if(n == 1)                                  return deepest[0];
        
        TreeNode* LCA = findLCA(root, deepest[0], deepest[1]);
        
        for(int i=2; i<n; i++) {
            LCA = findLCA(root, LCA, deepest[i]);
        }
        
        return LCA;
    }
    
};
#endif

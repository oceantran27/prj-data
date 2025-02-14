/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P10_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_1022_SUM_OF_ROOT_TO_LEAF_BINARY_NUMBERS_CPP
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
    
    int findNumber(vector<int> v) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        int sum = 0;
        int mul = 1;
        
        int n = v.size();
        
        for(int i=n-1; i>=0; i--) {
            sum += mul * v[i];
            mul *= 2;
        }
        
        return sum;
    }
    
    void dfs(TreeNode* root, vector<int> path, int &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        path.push_back(root->val);
        
        if(root->left == NULL && root->right == NULL) {
            
            int t = findNumber(path);
            res += t;
        }
        
        dfs(root->left, path, res);
        dfs(root->right, path, res);
        
        path.pop_back();
        
        return;
    }
    
    int sumRootToLeaf(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int res = 0;
        
        if(root == NULL)                            return res;
        
        vector<int> path;
        
        // Find all root to leaf paths
        
        dfs(root, path, res);
        
            
        return res;
    }
    
};
#endif

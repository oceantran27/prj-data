/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0095_UNIQUE_BINARY_SEARCH_TREES_II_0095_UNIQUE_BINARY_SEARCH_TREES_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P2_0095_UNIQUE_BINARY_SEARCH_TREES_II_0095_UNIQUE_BINARY_SEARCH_TREES_II_CPP
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
    
    vector<TreeNode*> generateTreeHelper(int start, int end) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        vector<TreeNode*> res;
        
        if(start > end) {
            
            TreeNode* node = NULL;
            res.push_back(node);
            
            return res;
        }                                     
        
        if(start == end) {
            
            TreeNode* node = new TreeNode(start);
            res.push_back(node);
            
            return res;
        }
        
        // Take ith node as root 
        
        for(int i=start; i<=end; i++) {
            
            vector<TreeNode*> leftNodes = generateTreeHelper(start, i - 1);
            vector<TreeNode*> rightNodes = generateTreeHelper(i + 1, end);
            
            for(auto &l : leftNodes) {
                for(auto &r : rightNodes) {
                    
                    TreeNode* node = new TreeNode(i);
                    
                    node->left = l;
                    node->right = r;
                    
                    res.push_back(node);
                }
            }
        }
    
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        return generateTreeHelper(1, n);        
    }
    
};
#endif

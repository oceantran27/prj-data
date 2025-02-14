/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P8_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_0979_DISTRIBUTE_COINS_IN_BINARY_TREE_CPP
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

    // dfs(node) is the excess number of coins in the subtree at or below this node
    int dfs(TreeNode* node, int &count) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(node == NULL)                        return 0;
        
        int l = dfs(node->left, count);
        int r = dfs(node->right, count);
        
        count += abs(l) + abs(r);
        
        return (node->val + l + r) - 1;
    }
    
    int distributeCoins(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        int count = 0;
        
        if(root == NULL)                        return count;
        
        dfs(root, count);
        return count;
    }
    
};
#endif

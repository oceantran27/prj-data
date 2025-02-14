/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0508_MOST_FREQUENT_SUBTREE_SUM_0508_MOST_FREQUENT_SUBTREE_SUM_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P6_0508_MOST_FREQUENT_SUBTREE_SUM_0508_MOST_FREQUENT_SUBTREE_SUM_CPP
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
    
    void findSubtreeSum(TreeNode* root, int &sum) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        sum += root->val;
        
        findSubtreeSum(root->left, sum);
        findSubtreeSum(root->right, sum);
        
        return;
    }
    
    void dfs(TreeNode* root, unordered_map<int, int> &u) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        int sum = 0;
        findSubtreeSum(root, sum);
        
        u[sum]++;
        
        dfs(root->left, u);
        dfs(root->right, u);
        
        return;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        
        if(root == NULL)                            return res;
        
        // 1st arg - sum, 2nd arg - Freq
        unordered_map<int, int> u;      
        
        // Find subtree sum at each node
        dfs(root, u);
        
        int maxFreq = -1;
        
        // 1st arg - Freq, 2nd arg - vector of Sum
        unordered_map<int, vector<int>> mp;
        
        for(auto &x : u) {
            
            if(maxFreq <= x.second) {
                maxFreq = x.second;
                mp[maxFreq].push_back(x.first);        
            }
        }
        
        res = mp[maxFreq];
        return res;
    }
    
};
#endif

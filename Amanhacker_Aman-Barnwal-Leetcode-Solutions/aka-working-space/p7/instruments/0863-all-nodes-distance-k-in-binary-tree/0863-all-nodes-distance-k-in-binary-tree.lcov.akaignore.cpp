/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P7_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_0863_ALL_NODES_DISTANCE_K_IN_BINARY_TREE_CPP
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
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
 };

class Solution {
public:
public:
    
    // Form the graph
    void bfs(TreeNode* root, unordered_map<int, vector<int>> &adj) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() == false) {
            
            int n = q.size();
            
            while(n--) {
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->left != NULL) {
                    
                    adj[temp->left->val].push_back(temp->val);
                    adj[temp->val].push_back(temp->left->val);
                    
                    q.push(temp->left);
                }
                
                if(temp->right != NULL) {
                    
                    adj[temp->right->val].push_back(temp->val);
                    adj[temp->val].push_back(temp->right->val);
                    
                    q.push(temp->right);
                }
            }
        }
        
        return;
    }
   
    void dfs(int src, unordered_map<int, vector<int>> &adj, vector<int> &dist, vector<int> &vis) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        vis[src] = 1;
        
        for(auto &ch : adj[src]) {
            
            if(vis[ch] == 0) {

                dist[ch] = dist[src] + 1;
                dfs(ch, adj, dist, vis);
            }
        }
        
        return;
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<int> res;
        unordered_map<int, vector<int>> adj;
        
        bfs(root, adj);
        int src = target->val;
        
        vector<int> dist(501, 0), vis(501, 0);
        dfs(src, adj, dist, vis);
        
        for(int i=0; i<=500; i++) {
            if(dist[i] == k && vis[i] == 1)                  res.push_back(i);
        }
        
        return res;
    }
    
};
#endif

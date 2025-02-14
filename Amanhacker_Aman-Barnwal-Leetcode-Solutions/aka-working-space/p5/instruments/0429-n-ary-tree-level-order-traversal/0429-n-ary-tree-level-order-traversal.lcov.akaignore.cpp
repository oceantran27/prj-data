/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_0429_N_ARY_TREE_LEVEL_ORDER_TRAVERSAL_CPP
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

class Node {
public:
public:
    int val;
    vector<Node*> children;

    Node() {
AKA_fCall++; /* LCOV_EXCL_LINE */ }

    Node(int _val) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        val = _val;
        children = _children;
    }
};

class Solution {
public:
public:

    void bfs(Node* root, vector<vector<int>> &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        queue<Node*> q;
        q.push({root});
        
        while(q.empty() == false) {
            
            int n = q.size();
            vector<int> path;
            
            while(n--) {
                
                Node* temp = q.front();
                q.pop();
            
                path.push_back(temp->val);
                
                vector<Node*> ch = temp->children;
                
                for(auto &x : ch) {
                    q.push(x);
                }
            }
            
            res.push_back(path);
            path.clear();
        }
        
        return;
    }
    
    vector<vector<int>> levelOrder(Node* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
    
        vector<vector<int>> res;
        
        if(root == NULL)                            return res;
        
        bfs(root, res);
        return res;
    }
    
};
#endif

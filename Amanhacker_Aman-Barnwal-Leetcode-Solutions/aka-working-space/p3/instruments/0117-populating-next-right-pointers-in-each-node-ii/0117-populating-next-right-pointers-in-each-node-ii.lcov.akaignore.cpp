/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0117_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_0117_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P3_0117_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_0117_POPULATING_NEXT_RIGHT_POINTERS_IN_EACH_NODE_II_CPP
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
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {
AKA_fCall++; /* LCOV_EXCL_LINE */ }
};

class Solution {
public:
public:
    
    void bfs(Node* &root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                            return;
        
        queue<Node*> q;
        q.push(root);
        
        while(q.empty() == false) {
            
            int n = q.size();
            
            // Print all nodes at a level
            vector<Node*> path;
            
            while(n--) {
                
                Node* temp = q.front();
                q.pop();
            
                path.push_back(temp);
                
                if(temp->left != NULL)              q.push(temp->left);
                if(temp->right != NULL)             q.push(temp->right);
            }
            
            int k = path.size();
            
            for(int i=1; i<k; i++) {
                path[i-1]->next = path[i];
            }
            
            path[k-1]->next = NULL;
            
            path.clear();
        }
        
        return;
    }
    
    Node* connect(Node* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                        return NULL;
        
        bfs(root);
        return root;
    }
    
};
#endif

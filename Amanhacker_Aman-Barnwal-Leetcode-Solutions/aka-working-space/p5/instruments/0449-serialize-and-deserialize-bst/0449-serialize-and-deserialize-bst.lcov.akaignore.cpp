/** Guard statement to avoid multiple declaration */
#ifndef AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0449_SERIALIZE_AND_DESERIALIZE_BST_0449_SERIALIZE_AND_DESERIALIZE_BST_CPP
#define AKA_SRC_D__PROJECTS_AKAUT_PRJ_DATA_AMANHACKER_AMAN_BARNWAL_LEETCODE_SOLUTIONS_P5_0449_SERIALIZE_AND_DESERIALIZE_BST_0449_SERIALIZE_AND_DESERIALIZE_BST_CPP
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

class Codec {
public:
public:

    void bfs(TreeNode* root, string &res) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        if(root == NULL)                        return;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() == false) {
            
            int n = q.size();
            
            while(n--) {
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp == NULL)                res += "#,";
                else                            res += to_string(temp->val) + ',';   
                
                if(temp != NULL) {
                    q.push(temp->left);
                    q.push(temp->right);
                }   
            }
        }
        
        return;
    }
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        string res = "";
        
        bfs(root, res);
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
AKA_fCall++; /* LCOV_EXCL_LINE */ 
        
        TreeNode* root = NULL;
        
        int n = data.length();
        
        if(n == 0)                              return root;
        
        stringstream ss(data);
        string str;
        
        getline(ss, str, ',');
        root = new TreeNode(stoi(str));
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() == false) {
            
            int n1 = q.size();
            
            while(n1--) {
                
                TreeNode* temp = q.front();
                q.pop();
                
                // For left node of "temp" node
                getline(ss, str, ',');
                
                if(str == "#")                      temp->left = NULL;
                
                else {
                    
                    TreeNode* leftNode = new TreeNode(stoi(str));
                    temp->left = leftNode;
                    
                    q.push(leftNode);
                }
                
                 // For right node of "temp" node
                getline(ss, str, ',');
                
                if(str == "#")                      temp->right = NULL;
                
                else {
                    
                    TreeNode* rightNode = new TreeNode(stoi(str));
                    temp->right = rightNode;
                    
                    q.push(rightNode);
                }
            }
        }        
        
        return root;
    }
    
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
#endif

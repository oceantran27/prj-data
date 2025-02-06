#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-06-14

Ŀ
ĳǰĽؽöǰĽжظ֡ǰ{1,2,4,7,3,5,6,8}{4,7,2,1,5,3,8,6}ؽء


*****************************************/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        // pre: ǰ
        // vin: 
        // ж
        int inlen = in.size();
        int prelen = pre.size();
        if (inlen==0 || prelen==0)
            return NULL;
        // ʼ
        TreeNode* root = new TreeNode(pre[0]);
        // ҵڵеλ
        int root_index_in_tin=0;
        for(int i=0; i<inlen; ++i){
            if(in[i] == pre[0]){
                root_index_in_tin = i;
                break;
            }
        }
        // 
        vector<int> left_pre, right_pre, left_in, right_in;
        // 
        for (int i=0; i<root_index_in_tin; ++i){
            left_in.push_back(in[i]);        // е
            left_pre.push_back(pre[i+1]);    // ǰе
        }
        // 
        for (int i=root_index_in_tin+1; i<inlen; ++i){
            right_in.push_back(in[i]);
            right_pre.push_back(pre[i]);
        }
        // ݹ
        root->left = reConstructBinaryTree(left_pre, left_in);
        root->right = reConstructBinaryTree(right_pre, right_in);
        
        return root;
        
    }
};
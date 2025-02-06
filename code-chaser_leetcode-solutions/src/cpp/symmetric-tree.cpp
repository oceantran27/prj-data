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
class Solution {
public:
  bool f(TreeNode*ptr,TreeNode*p){
      if(ptr==NULL && p==NULL){
          return true;
      }
      if(ptr==NULL||p==NULL){
          return false;
      }
      return ptr->val==p->val&&f(ptr->left,p->right)&&f(ptr->right,p->left);
  }
    bool isSymmetric(TreeNode* root) {
    if(root==NULL){
        return true;
    }
        
        return f(root->left,root->right);
    }
};

// sumission link  https://leetcode.com/submissions/detail/803837894/
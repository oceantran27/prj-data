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
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(root == NULL){
            return;
        }        
        
        TreeLinkNode* nextRight;
        
        if(root->left != NULL){
            (root->left)->next = root->right;
        }
        
        if(root->right != NULL){
            if(root->next != NULL){
                (root->right)->next = (root->next)->left;
            }
        }
        
        connect(root->left);
        connect(root->right);
        
    }
};

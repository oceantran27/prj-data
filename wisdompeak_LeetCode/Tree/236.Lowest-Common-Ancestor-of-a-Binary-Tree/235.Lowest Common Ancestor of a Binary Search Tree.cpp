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
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        
        if ((p->val-root->val)*(q->val-root->val)<=0) return root;
        
        if ((p->val>root->val)&&(q->val>root->val)) return lowestCommonAncestor(root->right,p,q);
        if ((p->val<root->val)&&(q->val<root->val)) return lowestCommonAncestor(root->left,p,q);
    }
};

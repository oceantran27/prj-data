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
class Solution 
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root == NULL || p == NULL || q == NULL)
            return NULL;
        if(p->val > q->val)
            swap(p,q);
        if( root->val >= p->val && root->val <= q->val )
            return root;
        else if( root->val < p->val && root->val < q->val )
            return lowestCommonAncestor(root->right,p,q);
        else if( root->val > p->val && root->val > q->val )
            return lowestCommonAncestor(root->left,p,q);
        return NULL;
    }
};
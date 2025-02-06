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
    int sum;
    
    int traversal(TreeNode* root, bool isLeft)
    {  
        if(root)
        {
            if( !root->left && !root->right && isLeft)
                return root->val;
            return traversal(root->left, true) + traversal(root->right, false);
        }
        else
            return 0;
    }
    
    int sumOfLeftLeaves(TreeNode* root) 
    {
        return traversal(root,false);
    }
};
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
 * Definition for binary tree
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
    int minDepth(TreeNode *root) 
    {
        if(root == NULL) 
            return 0;
        
        if(root->left == NULL) 
            return minDepth(root->right)+1;
        else if(root->right == NULL) 
            return minDepth(root->left)+1;
        else 
            return min(minDepth(root->left), minDepth(root->right))+1;
    }
};
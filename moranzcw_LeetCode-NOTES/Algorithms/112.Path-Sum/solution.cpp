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
class Solution {
public:
    bool dfs(TreeNode *node, int sum, int curSum)
    {
        if (node == NULL)
            return false;
        
        if (node->left == NULL && node->right == NULL)
            return curSum + node->val == sum;
               
        return dfs(node->left, sum, curSum + node->val) 
        || dfs(node->right, sum, curSum + node->val);
    }

    bool hasPathSum(TreeNode *root, int sum) 
    {
        return dfs(root, sum, 0);
    }
};
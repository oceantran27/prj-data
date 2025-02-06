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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root == NULL)    return false;
        if(sum == root->val && root->left == NULL && root->right == NULL)    return true;
        if(root->left && hasPathSum(root->left,sum - root->val))      return true;
        if(root->right && hasPathSum(root->right,sum - root->val))      return true;
        return false;
    }
};

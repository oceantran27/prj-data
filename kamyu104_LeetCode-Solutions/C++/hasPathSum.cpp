#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)

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
            if(!root)
                return false;

            if(!root->left && !root->right)
                return sum == root->val;

            return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
        }
};

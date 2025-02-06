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
    int ans;
public:
    int findTilt(TreeNode* root) {
        ans=0;
        dfs(root);
        return ans;
    }
    int dfs(TreeNode *node)
    {
        if (node==NULL)
            return 0;
        int left=dfs(node->left);
        int right=dfs(node->right);
        ans+=abs(left-right);
        return left+right+node->val;
    }
};

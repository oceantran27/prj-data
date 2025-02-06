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
    int ans;
    int sumOfLeftLeaves(TreeNode* root) {
        ans=0;
        dfs(root);
        return ans;
    }
    void dfs(TreeNode *p)
    {
        if (p==NULL)
            return;
        if (p->left!=NULL && p->left->left==NULL && p->left->right==NULL)
            ans+=p->left->val;
        dfs(p->left);
        dfs(p->right);
        return;
    }
};

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
    vector<vector<int> > levelOrder(TreeNode *root) {
        // https://oj.leetcode.com/problems/binary-tree-level-order-traversal/
        vector<vector<int> > result;
        if (root == NULL) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int count = q.size();
            result.push_back(vector<int>());
            for (int i = 0; i < count; i++) {
                TreeNode *tmp = q.front();
                q.pop();
                if (tmp->left != NULL) q.push(tmp->left);
                if (tmp->right != NULL) q.push(tmp->right);
                result.back().push_back(tmp->val);
            }
        }
        
        return result;
    }
};
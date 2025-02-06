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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        if (root == NULL)
        {
            return vector<vector<int>>();
        }
        
        vector<vector<int>> res;
        
        queue<TreeNode *> q;
        q.push(root);
        
        while (!q.empty()) {
            
            int count = (int)q.size();
            vector<int> ans;
            for (auto i = 0; i < count; ++i)
            {
                TreeNode *node = q.front();
                q.pop();
                
                ans.push_back(node->val);
                
                if (node->left)
                {
                    q.push(node->left);
                }
                
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            
            res.push_back(ans);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

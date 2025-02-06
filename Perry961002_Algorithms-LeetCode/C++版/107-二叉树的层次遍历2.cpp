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
        vector<vector<int>> answer;
        if(root == NULL)
            return answer;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            int len = que.size();
            vector<int> ans_temp;
            while(len--)
            {
                TreeNode* temp = que.front();
                que.pop();
                ans_temp.push_back(temp->val);
                if(temp->left!=NULL)
                    que.push(temp->left);
                if(temp->right!=NULL)
                    que.push(temp->right);
            }
            answer.push_back(ans_temp);
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
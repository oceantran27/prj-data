#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> levelOrder(TreeNode* root) {
        if(!root)
        	return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        TreeNode* tp;
        while(!q.empty())
        {
        	tp = q.front();
        	q.pop();
        	ans.push_back(tp->val);
        	if(tp->left) q.push(tp->left);
        	if(tp->right) q.push(tp->right);
        }
        return ans;
    }
};
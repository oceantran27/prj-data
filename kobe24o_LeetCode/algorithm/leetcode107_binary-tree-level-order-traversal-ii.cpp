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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL)
        	return {};
        queue<TreeNode*> q;
        vector<int> lv;
        vector<vector<int>> ans;
        q.push(root);
        int n;
        while(!q.empty())
        {
        	n = q.size();
            lv.clear();
        	while(n--)
        	{
        		root = q.front();
        		if(root->left)
        			q.push(root->left);
        		if(root->right)
        			q.push(root->right);
        		lv.push_back(root->val);
        		q.pop();
        	}
        	ans.push_back(lv);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
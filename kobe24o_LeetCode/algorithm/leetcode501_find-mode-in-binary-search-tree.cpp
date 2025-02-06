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
    vector<int> findMode(TreeNode* root) {
        stack<TreeNode*> stk;
        TreeNode *tp;
        vector<int> ans;
        int prev, maxlen = 0, curlen = 0;
        bool flag = true;
        while(root || !stk.empty())
        {
        	while(root)
        	{
        		stk.push(root);
        		root = root->left;
        	}
        	tp = stk.top();
        	stk.pop();
        	root = tp->right;
        	if(flag)//只进来一次
        	{
        		prev = tp->val;
        		flag = false;
        		curlen = 1;
        		maxlen = 1;
        		ans.push_back(tp->val);
        		continue;
        	}
        	if(tp->val == prev)
        	{
        		curlen++;
        		if(curlen > maxlen)
        		{
        			maxlen = curlen;
        			ans.clear();
        			ans.push_back(tp->val);
        		}
        		else if(curlen == maxlen)
        			ans.push_back(tp->val);
        	}
        	else//与前一个不相等
        	{
        		prev = tp->val;
        		curlen = 1;
        		if(curlen == maxlen)
        			ans.push_back(tp->val);
        	}
        }
        return ans;
    }
};
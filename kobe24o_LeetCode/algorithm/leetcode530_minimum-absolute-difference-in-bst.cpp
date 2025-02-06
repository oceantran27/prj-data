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
    int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*> stk;
        int prev, cur, minDist = INT_MAX;
        bool flag = true;
        TreeNode *tp;
        while(root || !stk.empty())
        {
        	while(root)
        	{
        		stk.push(root);
        		root = root->left;
        	}
        	tp = stk.top();
        	stk.pop();
        	cur = tp->val;
        	root = tp->right;
        	if(flag)
        	{
        		prev = tp->val;
        		flag = false;
        		continue;
        	}
        	minDist = min(minDist,abs(prev-cur));
        	prev = cur;
        }
        return minDist;
    }
};
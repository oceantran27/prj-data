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
	int count = 0;
public:
    int goodNodes(TreeNode* root) {
        dfs(root, root->val);
        return count;
    }
    void dfs(TreeNode* root, int maxv)
    {
    	if(!root) return;
    	if(root->val >= maxv)
    		count++;
    	maxv = max(maxv, root->val);//更新最大值
    	dfs(root->left, maxv);
    	dfs(root->right,maxv);
    }
};
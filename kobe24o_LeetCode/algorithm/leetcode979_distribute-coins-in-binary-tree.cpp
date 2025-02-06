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
	int move = 0;
public:
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return move;
    }

    int dfs(TreeNode* root)
    {
    	if(root == NULL)
    		return 0;
    	int l = dfs(root->left);
    	int r = dfs(root->right);
		move += abs(l)+abs(r);
    	return l+r+root->val-1;
    }
};
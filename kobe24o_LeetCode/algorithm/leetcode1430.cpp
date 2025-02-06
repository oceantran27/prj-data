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
	bool found = false;
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        dfs(root,arr,0);
        return found;
    }
    void dfs(TreeNode* root, vector<int> &arr, int i)
    {
    	if(!root || found)
    		return;
    	else if((root&&i==arr.size())||(!root && i<arr.size()))
    		return;
    	if(root->val==arr[i])
    	{
            if(!root->left && !root->right && i==arr.size()-1)
                found = true;
    		dfs(root->left, arr, i+1);
    		dfs(root->right, arr, i+1);
    	}
    }
};
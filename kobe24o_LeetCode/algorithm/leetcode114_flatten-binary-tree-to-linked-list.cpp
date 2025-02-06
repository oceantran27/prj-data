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
    void flatten(TreeNode* root) {
        f(root);
    }

    TreeNode* f(TreeNode* root)
    {
    	if(!root)
    		return NULL;
    	TreeNode *l = f(root->left);
    	TreeNode *r = f(root->right);
    	if(!l && !r)
    		return root;
    	if(!l && r)
    	{
    		return r;
    	}
    	if(l && !r)
    	{
    		swap(root->left,root->right);
    		return l;
    	}
    	else
    	{
    		swap(root->left,root->right);
    		l->right = root->left;
    		root->left = NULL;
    		return r;
    	}
    }
};
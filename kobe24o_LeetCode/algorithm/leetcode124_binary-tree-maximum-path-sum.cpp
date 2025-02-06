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
    int maxPathSum(TreeNode* root) {
        int maxanswer = INT_MIN;
        maxsum(root, maxanswer);
        return maxanswer;
    }
    int maxsum(TreeNode* root, int &maxanswer) 
    {
    	if(root == NULL)
    		return 0;
    	int left = maxsum(root->left,maxanswer);
    	int right = maxsum(root->right,maxanswer);
    	int curmax = root->val;
    	if(left > 0)
        	curmax += left;
        if(right > 0)
        	curmax += right;
        if(curmax > maxanswer)
    		maxanswer = curmax;
    	return max(root->val,max(left+root->val,right+root->val));
    }
};
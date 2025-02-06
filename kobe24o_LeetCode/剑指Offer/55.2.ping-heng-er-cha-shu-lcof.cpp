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
	bool balanced = true;
public:
    bool isBalanced(TreeNode* root) {
        depth(root);
        return balanced;
    }

    int depth(TreeNode* root)
    {
    	if(!balanced || !root)
    		return 0;
    	int depthL = depth(root->left);
    	int depthR = depth(root->right);
    	if(abs(depthL - depthR) > 1)
    		balanced = false;
    	return 1+max(depthL, depthR);
    }
};
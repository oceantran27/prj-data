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
    int findTilt(TreeNode* root) {
  		if(root == NULL)
  			return 0;
  		int ans = 0;
		tilt(root,ans);
		return ans;   
    }

    int tilt(TreeNode* root, int &ans)//返回包含root及以下的sum
    {
    	if(root == NULL)
    		return 0;
    	int leftSum = tilt(root->left,ans);
    	int rightSum = tilt(root->right,ans);
    	ans += abs(leftSum - rightSum);
    	return root->val+leftSum+rightSum;
    }
};
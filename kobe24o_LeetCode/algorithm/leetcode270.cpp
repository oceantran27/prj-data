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
	int ans = LONG_MAX;
	double diff = LONG_MAX;
public:
    int closestValue(TreeNode* root, double target) {
    	if(!root) return 0;
    	if(fabs(double(root->val)-target) < diff)
    	{
    		diff = fabs(double(root->val)-target);
    		ans = root->val;
    	}
    	closestValue(root->left, target);
    	closestValue(root->right, target);
    	return ans;
    }
};

class Solution {
	int ans = LONG_MAX;
	double diff = LONG_MAX;
public:
    int closestValue(TreeNode* root, double target) {
    	if(!root) return 0;
        if(fabs(double(root->val)-target) < diff)
    	{
    		diff = fabs(double(root->val)-target);
    		ans = root->val;
    	}
        if(root->val > target)
            closestValue(root->left, target);
        else
            closestValue(root->right, target);
    	return ans;
    }
};
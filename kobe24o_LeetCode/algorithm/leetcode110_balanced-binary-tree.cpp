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
    bool isBalanced(TreeNode* root) {
        bool bal = true;
        balence(root,bal);
        return bal;
    }
    int balence(TreeNode* root, bool &bal) 
    {
    	if(!bal)
    		return -1;
    	if(root == NULL)
    		return 0;
    	int left_height = balence(root->left,bal);
    	int right_height = balence(root->right,bal);
    	if(abs(left_height-right_height)>1)
    		bal = false;
    	return max(left_height,right_height)+1;
    }
};
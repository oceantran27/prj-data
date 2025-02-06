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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
        	return true;
        else if((!root1 && root2) || (root1 && !root2) 
        		|| (root1 && root2 && root1->val != root2->val))
        	return false;
        else//两个都存在，且相等
        {
        	return (flipEquiv(root1->left,root2->left) &&  flipEquiv(root1->right,root2->right))
        		|| (flipEquiv(root1->left,root2->right) &&  flipEquiv(root1->right,root2->left));
        }
    }
};
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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        	return NULL;
        if(root->val < p->val && root->val < q->val)
        	return lowestCommonAncestor(root->right,p,q);
        if(root->val > p->val && root->val > q->val)
        	return lowestCommonAncestor(root->left,p,q);
        return root;
    }
};
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
    TreeNode* pruneTree(TreeNode* root) {
        
        if(!root) return NULL;
        
        TreeNode *left=pruneTree(root->left);
        TreeNode *right=pruneTree(root->right);
        
        if(root->val==0 and !left and !right) return NULL;
        
        root->left=left;
        root->right=right;
        return root;
        
    }
};
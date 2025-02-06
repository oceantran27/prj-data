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
    TreeNode* invert(TreeNode* root) {
        if(!root)
            return NULL;
        TreeNode* temp = invert(root->left);
        root->left = invert(root->right);
        root->right = temp;
        return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        return invert(root);
    }
};

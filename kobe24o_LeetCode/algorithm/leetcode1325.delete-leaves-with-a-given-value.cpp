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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(!root)
            return NULL;
        TreeNode* l = removeLeafNodes(root->left, target);
        TreeNode* r = removeLeafNodes(root->right, target);
        if(!l)
            root->left = NULL;
        if(!r)
            root->right = NULL;
        if(!l && !r && root->val == target)
            return NULL;
        else
            return root;
    }
};
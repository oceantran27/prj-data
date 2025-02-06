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
    TreeNode *incOrder(TreeNode *root, TreeNode *tail) {
        if(!root) return tail;
        TreeNode *res = incOrder(root->left, root);
        root->left = NULL;
        root->right = incOrder(root->right, tail);
        return res;
    }
    TreeNode* increasingBST(TreeNode* root){
        return incOrder(root, NULL);
    }
};

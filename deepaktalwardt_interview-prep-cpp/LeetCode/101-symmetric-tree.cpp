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
    bool checkSymmetry(const TreeNode* treeL, const TreeNode* treeR) {
        if (treeL == nullptr && treeR == nullptr) {
            return true;
        } else if (treeL != nullptr && treeR != nullptr) {
            return treeL->val == treeR->val && checkSymmetry(treeL->left, treeR->right) && checkSymmetry(treeL->right, treeR->left);
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || checkSymmetry(root->left, root->right);
    }
};
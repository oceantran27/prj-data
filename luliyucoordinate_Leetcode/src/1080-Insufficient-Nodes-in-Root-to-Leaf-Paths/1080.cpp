#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    TreeNode* sufficientSubset(TreeNode* root, int limit) 
    {
        if (root == nullptr) return root;
        if (root->left == root->right) return root->val < limit ? nullptr : root;
        root->left = sufficientSubset(root->left, limit-root->val);
        root->right = sufficientSubset(root->right, limit-root->val );
        return root->left == root->right ? nullptr : root;
    }
};
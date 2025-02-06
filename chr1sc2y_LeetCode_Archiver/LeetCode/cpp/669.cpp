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
    TreeNode *trimBST(TreeNode *root, int L, int R) {
        if (!root)
            return nullptr;
        if (root->val > R)
            return trimBST(root->left, L, R);
        else if (root->val < L)
            return trimBST(root->right, L, R);
        root->left = trimBST(root->left, L, R);
        root->right = trimBST(root->right, L, R);
        return root;
    }
};
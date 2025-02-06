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
    TreeNode *convertBST(TreeNode *root) {
        if (!root)
            return nullptr;
        int m = 0;
        Count(root, m);
        return root;
    }

    void Count(TreeNode *root, int &m) {
        if (!root)
            return;
        Count(root->right, m);
        m += root->val;
        root->val = m;
        Count(root->left, m);
    }
};
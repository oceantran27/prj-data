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
    bool isUnivalTree(TreeNode *root) {
        if (!root)
            return true;
        return Traverse(root, root->val);
    }

    bool Traverse(TreeNode *node, const int &value) {
        if (!node)
            return true;
        if (node->val != value)
            return false;
        return Traverse(node->left, node->val) && Traverse(node->right, node->val);
    }
};

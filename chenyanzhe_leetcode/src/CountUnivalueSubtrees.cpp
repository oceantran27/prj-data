#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "CountUnivalueSubtrees.hpp"

int CountUnivalueSubtrees::countUnivalSubtrees(TreeNode *root) {
    int ret = 0;
    isUnival(root, ret);
    return ret;
}

bool CountUnivalueSubtrees::isUnival(TreeNode *root, int &global) {
    if (root == nullptr) return true;
    bool left = isUnival(root->left, global);
    bool right = isUnival(root->right, global);
    if (left && right && (root->left == nullptr || root->val == root->left->val)
        && (root->right == nullptr || root->val == root->right->val)) {
        global++;
        return true;
    }
    return false;
}

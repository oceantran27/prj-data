#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "BalancedBinaryTree.hpp"

#include <cstdlib>

using namespace std;

bool BalancedBinaryTree::isBalanced(TreeNode *root) {
    return maxDepth(root) != -1;
}

int BalancedBinaryTree::maxDepth(TreeNode *root) {
    if (root == nullptr) return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    if (left == -1 || right == -1 || abs(left - right) > 1)
        return -1;

    return max(left, right) + 1;
}

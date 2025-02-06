#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "LowestCommonAncestorOfABinarySearchTree.hpp"

TreeNode *LowestCommonAncestorOfABinarySearchTree::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if (root == nullptr || p == nullptr || q == nullptr)
        return nullptr;

    if (root->val > p->val && root->val > q->val)
        return lowestCommonAncestor(root->left, p, q);

    if (root->val < p->val && root->val < q->val)
        return lowestCommonAncestor(root->right, p, q);

    return root;
}

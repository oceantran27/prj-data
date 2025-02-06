#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "BinarySearchTreeIterator.hpp"

BSTIterator::BSTIterator(TreeNode *root) {
    while (root != nullptr) {
        s.push(root);
        root = root->left;
    }
}

bool BSTIterator::hasNext() {
    return !s.empty();
}

int BSTIterator::next() {
    TreeNode *node = s.top();
    s.pop();
    int ret = node->val;
    node = node->right;

    while (node != nullptr) {
        s.push(node);
        node = node->left;
    }

    return ret;
}

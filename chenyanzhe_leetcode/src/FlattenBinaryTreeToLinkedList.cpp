#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "FlattenBinaryTreeToLinkedList.hpp"

#include <stack>

using namespace std;

void FlattenBinaryTreeToLinkedList::flatten(TreeNode *root) {
//    flattenRec2(root, nullptr);
    TreeNode *prev = nullptr;
    flattenRec3(root, prev);
}

void FlattenBinaryTreeToLinkedList::flattenRec1(TreeNode *root) {
    if (root == nullptr)
        return;

    flattenRec1(root->left);
    flattenRec1(root->right);

    if (root->left == nullptr)
        return;

    // find the tail of left subtree
    TreeNode *tail = root->left;

    while (tail->right)
        tail = tail->right;

    // insert left subtree between root and right subtree
    tail->right = root->right;
    root->right = root->left;
    root->left = nullptr;
}

void FlattenBinaryTreeToLinkedList::flattenRec3(TreeNode *root, TreeNode *&prev) {
    if (prev != nullptr) {
        prev->left = nullptr;
        prev->right = root;
    }

    if (root == nullptr) return;

    prev = root;

    TreeNode *left = root->left;
    TreeNode *right = root->right;

    flattenRec3(left, prev);
    flattenRec3(right, prev);
}

TreeNode *FlattenBinaryTreeToLinkedList::flattenRec2(TreeNode *root, TreeNode *tail) {
    if (root == nullptr) return tail;

    root->right = flattenRec2(root->left, flattenRec2(root->right, tail));
    root->left = nullptr;
    return root;
}

void FlattenBinaryTreeToLinkedList::flattenStack(TreeNode *root) {
    stack<TreeNode *> s;

    if (root != nullptr)
        s.push(root);

    while (!s.empty()) {
        TreeNode *node = s.top();
        s.pop();

        if (node->right != nullptr)
            s.push(node->right);

        if (node->left != nullptr)
            s.push(node->left);

        node->left = nullptr;
        node->right = s.empty() ? nullptr : s.top();
    }
}

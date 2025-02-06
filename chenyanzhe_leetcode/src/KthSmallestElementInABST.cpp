#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "KthSmallestElementInABST.hpp"

#include <stack>

using namespace std;

int KthSmallestElementInABST::kthSmallest(TreeNode *root, int k) {
    return kthSmallestRecursive(root, k);
}

int KthSmallestElementInABST::kthSmallestBinarySearch(TreeNode *root, int k) {
    int n = countNodes(root->left);

    if (k <= n)
        return kthSmallestBinarySearch(root->left, k);
    else if (k > n + 1)
        return kthSmallestBinarySearch(root->right, k - n - 1);

    return root->val;
}

int KthSmallestElementInABST::countNodes(TreeNode *root) {
    if (root == nullptr)
        return 0;

    return 1 + countNodes(root->left) + countNodes(root->right);
}

int KthSmallestElementInABST::kthSmallestIterative(TreeNode *root, int k) {
    stack<TreeNode *> s;
    TreeNode *cur = root;

    while (!s.empty() || cur) {
        if (cur) {
            s.push(cur);
            cur = cur->left;
        } else {
            cur = s.top();
            s.pop();
            k--;
            if (k == 0) return cur->val;
            cur = cur->right;
        }
    }

    return -1;
}

int KthSmallestElementInABST::kthSmallestRecursive(TreeNode *root, int k) {
    int ret = 0;
    kthSmallestRecursive_helper(root, k, ret);
    return ret;
}

void KthSmallestElementInABST::kthSmallestRecursive_helper(TreeNode *root, int &k, int &ret) {
    if (root->left) kthSmallestRecursive_helper(root->left, k, ret);
    k--;
    if (k == 0) {
        ret = root->val;
        return;
    }
    if (root->right) kthSmallestRecursive_helper(root->right, k, ret);
}
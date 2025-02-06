#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "ConstructBinaryTreeFromInorderAndPostorderTraversal.hpp"

TreeNode *ConstructBinaryTreeFromInorderAndPostorderTraversal::
buildTree(vector<int> &inorder, vector<int> &postorder) {
    int postIndex = postorder.size() - 1;
    return buildTree(inorder, postorder, 0, inorder.size() - 1, postIndex);
}

TreeNode *ConstructBinaryTreeFromInorderAndPostorderTraversal::
buildTree(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int &postIndex) {
    if (inStart > inEnd)
        return nullptr;

    TreeNode *root = new TreeNode(postorder[postIndex--]);

    if (inStart == inEnd)
        return root;

    // find root in inorder
    int mid = inStart;

    while (mid <= inEnd && inorder[mid] != root->val)
        mid++;

    root->right = buildTree(inorder, postorder, mid + 1, inEnd, postIndex);
    root->left = buildTree(inorder, postorder, inStart, mid - 1, postIndex);
    return root;
}

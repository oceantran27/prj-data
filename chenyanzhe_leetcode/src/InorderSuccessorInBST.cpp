#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "InorderSuccessorInBST.hpp"

TreeNode *InorderSuccessorInBST::inorderSuccessor(TreeNode *root, TreeNode *p) {
    TreeNode *ret = nullptr;

    if (p == nullptr) return ret;

    while (root) {
        if (root->val > p->val) {
            ret = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return ret;
}
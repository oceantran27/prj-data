#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "SameTree.hpp"

bool SameTree::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr && q == nullptr)
        return true;

    if (p == nullptr || q == nullptr)
        return false;

    return (p->val == q->val) && isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}

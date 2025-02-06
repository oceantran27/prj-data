#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "CountCompleteTreeNodes.hpp"

int CountCompleteTreeNodes::countNodes(TreeNode *root) {
    int hl = 0, hr = 0;
    TreeNode *l = root, *r = root;

    while (l) {
        hl++;
        l = l->left;
    }

    while (r) {
        hr++;
        r = r->right;
    }

    if (hl == hr)
        return (1 << hl) - 1;
    else
        return countNodes(root->left) + countNodes(root->right) + 1;
}

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    TreeNode *bstToGst(TreeNode *root) {
        Traverse(root, 0);
        return root;
    }

    int Traverse(TreeNode *node, int val) {
        if (!node)
            return val;
        int right = Traverse(node->right, val);
        node->val += right;
        int left = Traverse(node->left, node->val);
        return left;
    }
};

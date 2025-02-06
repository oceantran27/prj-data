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
    TreeNode *searchBST(TreeNode *root, const int &val) {
        if (!root)
            return nullptr;
        if (root->val == val)
            return root;
        return val > root->val ? searchBST(root->right, val) : searchBST(root->left, val);
    }
};
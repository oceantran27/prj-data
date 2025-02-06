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
    bool leafSimilar(TreeNode *root1, TreeNode *root2) {
        vector<int> leaves1, leaves2;
        getLeaves(root1, leaves1);
        getLeaves(root2, leaves2);
        return (leaves1 == leaves2);
    }

    void getLeaves(TreeNode *root, vector<int> &leaves) {
        if (!root)
            return;
        if (!root->left && !root->right) {
            leaves.push_back(root->val);
            return;
        }
        getLeaves(root->left, leaves);
        getLeaves(root->right, leaves);
    }
};
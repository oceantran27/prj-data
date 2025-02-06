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
    int maxLen;

    int longestUnivaluePath(TreeNode *root) {
        maxLen = 0;
        dfs(root);
        return maxLen;
    }

    int dfs(TreeNode *root) {
        if (!root)
            return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        int left = (root->left && root->left->val == root->val) ? 1 + l : 0;
        int right = (root->right && root->right->val == root->val) ? 1 + r : 0;
        if (maxLen < (left + right)) maxLen = left + right;
        return max(left, right);
    }
};
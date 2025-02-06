#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/count-good-nodes-in-binary-tree/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(H)
class Solution {
    int ans = 0;
    void dfs(TreeNode *root, int maxVal) {
        if (!root) return;
        if (root->val >= maxVal) ++ans;
        maxVal = max(maxVal, root->val);
        dfs(root->left, maxVal);
        dfs(root->right, maxVal);
    }
public:
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return ans;
    }
};
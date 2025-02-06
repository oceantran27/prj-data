#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/delete-leaves-with-a-given-value/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(H)
class Solution {
private:
    TreeNode* postorder(TreeNode *node, int target) {
        if (!node) return NULL;
        node->left = postorder(node->left, target);
        node->right = postorder(node->right, target);
        return !node->left && !node->right && node->val == target ? NULL : node;
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return postorder(root, target);
    }
};
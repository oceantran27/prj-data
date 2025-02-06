#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root, long minVal=LONG_MIN, long maxVal=LONG_MAX) {
        if (!root) return true;
        int val = root->val;
        if (val > minVal && val < maxVal) {
            return isValidBST(root->left, minVal, val) && isValidBST(root->right, val, maxVal);
        }
        return false;
    }
};
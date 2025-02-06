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
    vector<int> sorted;

    void traverse(TreeNode* root) {
        if (root == NULL) return;

        traverse(root->right);
        sorted.push_back(root->val);
        traverse(root->left);
    }

    int kthLargest(TreeNode* root, int k) {
        traverse(root);

        return sorted[k-1];
    }
};
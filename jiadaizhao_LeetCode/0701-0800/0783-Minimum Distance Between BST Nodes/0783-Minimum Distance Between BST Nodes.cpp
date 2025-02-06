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
    int minDiffInBST(TreeNode* root) {
        int minDiff = INT_MAX;
        TreeNode* prev = nullptr;
        dfs(root, prev, minDiff);
        return minDiff;
    }
    
private:
    void dfs(TreeNode* root, TreeNode* &prev, int& minDiff) {
        if (root == nullptr) {
            return;
        }
        
        dfs(root->left, prev, minDiff);
        if (prev != nullptr) {
            minDiff = min(minDiff, root->val - prev->val);
        }
        prev = root;
        dfs(root->right, prev, minDiff);
    }
};

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string path = "";
        dfs(root, path, result);
        return result;
    }
    
private:
    void dfs(TreeNode* root, string path, vector<string>& result) {
        if (root == nullptr) {
            return;
        }
        
        path += (path.size() ? "->" : "") + to_string(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            result.push_back(path);
            return;
        }
        
        dfs(root->left, path, result);
        dfs(root->right, path, result);
    }
};

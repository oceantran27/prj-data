#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

/**
 * Definition for a binary tree node.
*/
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int sum = 0;
    string pathStr;

public:
    int sumNumbers(TreeNode *root) {
        dfs(root);
        return sum;
    }

private:
    void dfs(TreeNode *root) {
        if (root == nullptr) return;

        pathStr.push_back(root->val + '0');
        if (root->left == nullptr && root->right == nullptr)
            sum += stoi(pathStr);
        else
        {
            if (root->left != nullptr)
                dfs(root->left);
            if (root->right != nullptr)
                dfs(root->right);
        }
        pathStr.pop_back();
    }
};

// Test
int main()
{
    Solution sol;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = nullptr;
    root->left->right = nullptr;
    root->right = new TreeNode(3);
    root->right->left = nullptr;
    root->right->right = nullptr;

    auto res = sol.sumNumbers(root);
    cout << res << endl;   
    
    return 0;
}
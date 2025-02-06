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
    void recoverTree(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        
        TreeNode *first = nullptr, *second = nullptr;
        TreeNode *curr = root, *prev = nullptr;
        stack<TreeNode*> St;
        while (!St.empty() || curr) {
            if (curr) {
                St.push(curr);
                curr = curr->left;
            }
            else {
                curr = St.top();
                St.pop();
                if (prev && curr->val < prev->val) {
                    if (!first) {
                        first = prev;
                    }
                    second = curr;
                }
                prev = curr;
                curr = curr->right;
            }
        }
        
        swap(first->val, second->val);
    }
};

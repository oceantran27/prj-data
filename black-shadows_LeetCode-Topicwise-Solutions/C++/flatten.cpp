#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(logn)

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    public:
        void flatten(TreeNode *root) {
            if(!root)
                return;

            p = root;
            flatten(root->left);
            p->right = root->right;
            flatten(root->right);
            if(root->left) {
                root->right = root->left;
                root->left = NULL;
            }
        }
    private:
        TreeNode *p;
};

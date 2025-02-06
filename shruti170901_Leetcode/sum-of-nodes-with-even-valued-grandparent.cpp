#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(h)

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
    int sumEvenGrandparent(TreeNode* root) {
        return sumEvenGrandparentHelper(root, 1, 1);
    }

private:
    int sumEvenGrandparentHelper(TreeNode *root, int p, int gp) {
        return root
               ? sumEvenGrandparentHelper(root->left, root->val, p) +
                 sumEvenGrandparentHelper(root->right, root->val, p) +
                 (gp % 2 == 0 ? root->val : 0)
               : 0;
    }
};

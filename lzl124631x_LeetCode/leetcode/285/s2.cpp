#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/inorder-successor-in-bst/
// Author: github.com/lzl124631x
// Time: O(logN)
// Space: O(1)
// Ref: https://leetcode.com/problems/inorder-successor-in-bst/discuss/72721/10-(and-4)-lines-O(h)-JavaC%2B%2B
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode *best = NULL;
        while (root) {
            root = root->val > p->val ? (best = root)->left : root->right;
        }
        return best;
    }
};
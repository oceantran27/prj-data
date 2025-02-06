#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// OJ: https://leetcode.com/problems/count-univalue-subtrees/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(H) where H is the height of the tree
class Solution {
private:
    int cnt = 0;
    bool postorder(TreeNode *root) {
        if (!root) return true;
        bool left = postorder(root->left), right = postorder(root->right);
        if (left && right
            && (!root->left || root->val == root->left->val)
            && (!root->right || root->val == root->right->val)) {
            ++cnt;
            return true;
        }
        return false;
    }
public:
    int countUnivalSubtrees(TreeNode* root) {
        postorder(root);
        return cnt;
    }
};
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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> St;
        TreeNode* p = root;
        while (!St.empty() || p) {
            if (p) {
                St.push(p);
                p = p->left;
            }
            else {
                p = St.top();
                St.pop();
                if (--k == 0) {
                    return p->val;
                }
                p = p->right;
            }
        }
        
        return -1;
    }
};

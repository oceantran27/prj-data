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
    int helper(TreeNode* root, int pr = 9, int gpr = 9) {
        if(root)
			return helper(root->left, root->val, pr)+helper(root->right, root->val, pr)+(gpr % 2==0 ? root->val:0) ;
        return 0;
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        return helper(root);
    }
};
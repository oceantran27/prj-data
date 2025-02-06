#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
/*
 * @lc app=leetcode.cn id=653 lang=cpp
 *
 * [653] 两数之和 IV - 输入 BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <set>
using namespace std;

class Solution {
public:
    bool res = false;
    set<int> m;
    void travel(TreeNode* root, int k){
        if(!root)return;
        if(m.find(root->val) != m.end()){
            res = true;
        }
        int d = k-root->val;
        m.insert(d);
        travel(root->left, k);
        travel(root->right, k);
    }
    bool findTarget(TreeNode* root, int k) {
        travel(root, k);
        return res;
    }
};
// @lc code=end


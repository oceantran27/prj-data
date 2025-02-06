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
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution 
{
public:
    int tmp;
    bool tag;
    bool key;
    bool isValidBST(TreeNode *root) 
    {
        tag = false;
        key = true;
        check(root);
        return key;
    }

    void check(TreeNode *root)
    {
        if(key == false)
            return;
        if(root == NULL)
            return;
        check(root->left);
        if(tag == false)
        {
            tmp = root->val;
            tag = true;
        }
        else
        {
            if(root->val <= tmp)
                key = false;
            else
                tmp = root->val;
        }
        check(root->right);
    }
};
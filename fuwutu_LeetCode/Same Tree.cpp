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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (NULL == p && NULL == q)
        {
            return true;
        }
        
        return (NULL != p && NULL != q
            && p->val == q->val
            && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
Given a binary tree, return the level order traversal of its nodes' values.
(ie, from left to right, level by level).

For example:
Given binary tree {3,9,20,#,#,15,7},
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.


OJ's Binary Tree Serialization:
The serialization of a binary tree follows a level order traversal,
where '#' signifies a path terminator where no node exists below.

Here's an example:
   1
  / \
 2   3
    /
   4
    \
     5
The above binary tree is serialized as "{1,2,3,#,#,4,#,#,5}".
 */

#include <queue>
#include <vector>
#include <stdio.h>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int        val;
    TreeNode*  left;
    TreeNode*  right;

    TreeNode(int x)
        : val(x), left(NULL), right(NULL)
    {
    }
};

class Solution
{
public:
    vector<vector<int> > levelOrder(TreeNode* root)
    {
        vector<vector<int> > result;
        if (root == NULL)
        {
            return result;
        }
        queue<pair<TreeNode*, int> > queue;
        queue.push(make_pair(root, 1));
        while (!queue.empty())
        {
            TreeNode* node = queue.front().first;
            int level = queue.front().second;
            queue.pop();
            if (level > result.size())
            {
                result.push_back(vector<int>(1, node->val));
            }
            else
            {
                result.back().push_back(node->val);
            }
            if (node->left)
            {
                queue.push(make_pair(node->left, level + 1));
            }
            if (node->right)
            {
                queue.push(make_pair(node->right, level + 1));
            }
        }
        return result;
    }
};

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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> queue_root;
        if (root!=NULL)
            queue_root.push(root);
        int index=0,loop_times;
        TreeNode* p;
        while (!queue_root.empty())
        {
            ++index;
            loop_times=queue_root.size();
            for (int i=0;i<loop_times;++i)
            {
                p=queue_root.front();
                if (p->left==NULL && p->right==NULL)
                    return index;
                if (p->left!=NULL)
                    queue_root.push(p->left);
                if (p->right!=NULL)
                    queue_root.push(p->right);
                queue_root.pop();
            }
        }
        return index;
    }
};

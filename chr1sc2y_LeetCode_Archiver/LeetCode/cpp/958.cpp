#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isCompleteTree(TreeNode *root) {
        if (!root)
            return true;
        queue<TreeNode *> que;
        que.push(root);
        int size = 1;
        bool finished = false;
        while (!que.empty()) {
            while (size > 0) {
                root = que.front();
                que.pop();
                if (finished && (root->left || root->right))
                    return false;
                if (root->left && root->right) {
                    que.push(root->left);
                    que.push(root->right);
                } else if (root->left) {
                    que.push(root->left);
                    finished = true;
                } else if (root->right)
                    return false;
                else
                    finished = true;
                --size;
            }
            size = que.size();
        }
        return true;
    }
};
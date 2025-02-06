#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Solution for: https://leetcode.com/problems/maximum-depth-of-binary-tree/
*/

int getMaxDepth(TreeNode *root, int level) {
        if (!root)
            return level;
        else
            return std::max(getMaxDepth(root->left, level+1),
                            getMaxDepth(root->right, level +1));
    }
    
    int maxDepth(TreeNode* root) {
        return getMaxDepth(root, 0);
    }

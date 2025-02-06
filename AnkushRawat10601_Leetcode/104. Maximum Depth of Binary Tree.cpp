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

private:
    int max_depth = 0;
    void depthCount(TreeNode* root, int depth) {
        if (!root) max_depth = max_depth<depth ? depth:max_depth;
        else {
            depth++;
            depthCount(root->left, depth);
            depthCount(root->right, depth);
        }
    }

public:
    int maxDepth(TreeNode* root) {
        depthCount(root, 0);
        return max_depth;
    }
    
};
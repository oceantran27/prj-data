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
    int count = 0;  

    void dfs(TreeNode* root, int maxSoFar) {
        if(root) {

            if(root->val >= maxSoFar) count++;

            dfs(root->left, max(maxSoFar,root->val));

            dfs(root->right, max(maxSoFar,root->val));

        }

    }

    int goodNodes(TreeNode* root) {

        dfs(root, INT_MIN);

        return count;

    }
};

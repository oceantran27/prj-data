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
    int count;
        void dfs(TreeNode *curr, int maxv) {
            if(!curr)
                return;
            if(curr->val >= maxv) {
                maxv = curr->val;
                count++;
            }
            dfs(curr->left, maxv);
            dfs(curr->right, maxv);
        }

    int goodNodes(TreeNode* root) {
        count = 0;
        dfs(root, INT_MIN);
        return count;
    }
};

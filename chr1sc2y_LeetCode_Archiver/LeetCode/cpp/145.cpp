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
    vector<int> postorderTraversal(TreeNode *root) {
        if (!root)
            return {};
        vector<int> ret;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty()) {
            TreeNode *curr = s.top();
            s.pop();
            ret.push_back(curr->val);
            if (curr->left)
                s.push(curr->left);
            if (curr->right)
                s.push(curr->right);
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};

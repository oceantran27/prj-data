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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;
        stack<TreeNode*> p;
        if (root == NULL) return v;
        p.push(root);
        while (p.size()){
            v.push_back(p.top()->val);
            TreeNode *r = p.top();
            p.pop();
            if (r->right) p.push(r->right);
            if (r->left) p.push(r->left);
        }
        return v;
    }
};

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
    string tree2str(TreeNode *t) {
        string str;
        if (!t)
            return str;
        PreOrder(t, str);
        str.erase(str.begin());
        str.erase(str.end() - 1);
        return str;
    }

    void PreOrder(TreeNode *root, string &str) {
        if (!root)
            return;
        str += '(';
        str += to_string(root->val);
        if (!root->left && root->right)
            str += "()";
        PreOrder(root->left, str);
        PreOrder(root->right, str);
        str += ')';
        return;
    }
};
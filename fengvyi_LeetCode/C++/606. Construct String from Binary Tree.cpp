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
    string tree2str(TreeNode* t) {
        if(!t) return "";
        string l = tree2str(t->left);
        string r = tree2str(t->right);
        if(!t->left && !t->right) return to_string(t->val);
        if(!t->right) return to_string(t->val) + "(" + l + ")";
        return to_string(t->val) + "(" + l + ")" + "(" + r + ")";
    }
};

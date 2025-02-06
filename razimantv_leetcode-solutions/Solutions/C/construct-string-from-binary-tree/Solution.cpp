#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/construct-string-from-binary-tree

class Solution {
 public:
  string tree2str(TreeNode* root) {
    if (!root) return "";
    string ret = to_string(root->val);
    if (root->left or root->right) ret += "(" + tree2str(root->left) + ")";
    if (root->right) ret += "(" + tree2str(root->right) + ")";
    return ret;
  }
};

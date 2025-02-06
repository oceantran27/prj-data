#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor

class Solution {
 public:
  int best(TreeNode* root, int l, int r) {
    int ret = max(root->val - l, r - root->val);

    l = min(l, root->val);
    r = max(r, root->val);
    if (root->left != nullptr) ret = max(ret, best(root->left, l, r));
    if (root->right != nullptr) ret = max(ret, best(root->right, l, r));
    return ret;
  }
  int maxAncestorDiff(TreeNode* root) {
    return best(root, root->val, root->val);
  }
};

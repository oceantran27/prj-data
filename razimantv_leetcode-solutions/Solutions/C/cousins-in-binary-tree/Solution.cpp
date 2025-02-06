#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/cousins-in-binary-tree

class Solution {
 public:
  void work(TreeNode* root, int parent, int depth,
            map<int, pair<int, int>>& pdmap) {
    if (root == NULL) return;
    pdmap[root->val] = {parent, depth};
    work(root->left, root->val, depth + 1, pdmap);
    work(root->right, root->val, depth + 1, pdmap);
  }
  bool isCousins(TreeNode* root, int x, int y) {
    map<int, pair<int, int>> pdmap;
    work(root, -1, 0, pdmap);

    auto pdx = pdmap[x], pdy = pdmap[y];
    return pdx.first != pdy.first and pdx.second == pdy.second;
  }
};

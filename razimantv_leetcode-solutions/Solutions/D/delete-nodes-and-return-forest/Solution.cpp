#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/delete-nodes-and-return-forest

class Solution {
 public:
  vector<TreeNode*> ret;
  void dfs(TreeNode*& root, unordered_set<int>& rem, bool add) {
    if (!root) return;

    bool torem = rem.count(root->val);
    dfs(root->left, rem, torem);
    dfs(root->right, rem, torem);
    if (add and !torem) ret.push_back(root);
    if (torem) root = nullptr;
  }

  vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
    unordered_set<int> rem(to_delete.begin(), to_delete.end());
    dfs(root, rem, true);
    return ret;
  }
};

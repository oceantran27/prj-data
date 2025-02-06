#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/balanced-binary-tree

class Solution {
 public:
  pair<bool, int> work(TreeNode* root) {
    if (root == nullptr) return {true, 0};
    auto [f1, d1] = work(root->left);
    if (!f1) return {false, -1};
    auto [f2, d2] = work(root->right);
    return {f2 && abs(d1 - d2) < 2, max(d1, d2) + 1};
  }
  bool isBalanced(TreeNode* root) { return work(root).first; }
};

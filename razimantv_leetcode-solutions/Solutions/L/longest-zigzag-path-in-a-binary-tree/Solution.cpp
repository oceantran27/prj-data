#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/

class Solution {
 public:
  tuple<int, int, int> dfs(TreeNode* root) {
    if (!root) return {-1, -1, -1};
    int best{}, left{}, right{};
    auto [lbest, lleft, lright] = dfs(root->left);
    best = max(best, lbest);
    left = lright + 1;
    auto [rbest, rleft, rright] = dfs(root->right);
    best = max(best, rbest);
    right = rleft + 1;
    best = max(best, max(left, right));
    return {best, left, right};
  }
  int longestZigZag(TreeNode* root) { return get<0>(dfs(root)); }
};

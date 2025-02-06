#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/binary-tree-tilt

class Solution {
 public:
  pair<int, int> sumtilt(TreeNode* n) {
    if (n == nullptr) return {0, 0};
    auto [s1, t1] = sumtilt(n->left);
    auto [s2, t2] = sumtilt(n->right);
    return {s1 + s2 + n->val, t1 + t2 + abs(s1 - s2)};
  }
  int findTilt(TreeNode* root) { return sumtilt(root).second; }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/deepest-leaves-sum

class Solution {
 public:
  int depth, tot;
  int deepestLeavesSum(TreeNode* root, int d = 0) {
    if (root == nullptr) return 0;
    if (!d) depth = tot = 0;
    if (root->left == nullptr and root->right == nullptr) {
      if (d > depth)
        depth = d, tot = root->val;
      else if (d == depth)
        tot += root->val;
    }
    deepestLeavesSum(root->left, d + 1);
    deepestLeavesSum(root->right, d + 1);
    return tot;
  }
};

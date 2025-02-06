#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/average-of-levels-in-binary-tree

class Solution {
 public:
  vector<double> tot;
  vector<int> cnt;

  vector<double> averageOfLevels(TreeNode* root, int level = 0) {
    if (root == nullptr) return {};
    if (tot.size() == level)
      tot.push_back(root->val), cnt.push_back(1);
    else
      tot[level] += root->val, ++cnt[level];
    averageOfLevels(root->left, level + 1);
    averageOfLevels(root->right, level + 1);

    if (level == 0) {
      for (int i = 0, n = tot.size(); i < n; ++i) tot[i] /= cnt[i];
      return tot;
    } else
      return {};
  }
};

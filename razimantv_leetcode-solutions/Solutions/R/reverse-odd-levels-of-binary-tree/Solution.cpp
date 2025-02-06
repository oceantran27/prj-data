#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/

class Solution {
 public:
  TreeNode* reverseOddLevels(TreeNode* root) {
    vector<vector<TreeNode*>> levels{{root}};
    for (int i = 0; levels[i][0]->left; ++i) {
      levels.push_back({});
      for (auto n : levels[i]) {
        levels[i + 1].push_back(n->left);
        levels[i + 1].push_back(n->right);
      }
      if (!(i & 1)) {
        for (int j = 0, k = levels[i + 1].size() - 1; j < k; ++j, --k) {
          swap(levels[i + 1][j]->val, levels[i + 1][k]->val);
        }
      }
    }
    return root;
  }
};

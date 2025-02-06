#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/maximum-width-of-binary-tree

class Solution {
  vector<vector<int>> L, R;

 public:
  int widthOfBinaryTree(TreeNode* root, int level = 0, vector<int> node = {0}) {
    if (level == 0) {
      if (root == NULL) return 0;
      L.clear();
      R.clear();
    }

    if (L.size() == level) {
      L.push_back(node);
      R.push_back(node);
    } else {
      L[level] = min(L[level], node);
      R[level] = max(R[level], node);
    }

    node.push_back(0);
    if (root->left != NULL) widthOfBinaryTree(root->left, level + 1, node);
    node.back() = 1;
    if (root->right != NULL) widthOfBinaryTree(root->right, level + 1, node);

    if (level > 0) return 0;
    int best = 1;
    for (int i = 1; i < L.size(); ++i) {
      int cur = 1;
      for (int j = L[i].size(); --j;) {
        if (R[i][j] > L[i][j])
          cur += (1 << (L[i].size() - j - 1));
        else if (R[i][j] < L[i][j])
          cur -= (1 << (L[i].size() - j - 1));
      }
      best = max(cur, best);
    }
    return best;
  }
};

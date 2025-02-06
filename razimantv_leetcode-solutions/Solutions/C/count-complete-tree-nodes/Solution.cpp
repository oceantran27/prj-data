#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/count-complete-tree-nodes

class Solution {
 public:
  int countNodes(TreeNode* root) {
    int ret = 0;
    queue<TreeNode*> bfsq;
    if (root != NULL) bfsq.push(root);
    while (!bfsq.empty()) {
      TreeNode* cur = bfsq.front();
      bfsq.pop();

      ret++;
      if (cur->left != NULL) bfsq.push(cur->left);
      if (cur->right != NULL) bfsq.push(cur->right);
    }
    return ret;
  }
};

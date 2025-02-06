#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
  int minDepth(TreeNode *root) {
    if (NULL == root) {
      return 0;
    }

    int depth = INT_MAX;

    if (root->left != NULL) {
      depth = minDepth(root->left);
    }

    if (root->right != NULL) {
      depth = min(depth, minDepth(root->right));
    }

    return (INT_MAX == depth) ? 1 : depth + 1;
  }
};
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
  TreeNode *searchBST(TreeNode *root, int val) {
    if (root == nullptr) {
      return nullptr;
    }
    if (val == root->val) {
      return root;
    }
    return searchBST(val < root->val ? root->left : root->right, val);
  }
};
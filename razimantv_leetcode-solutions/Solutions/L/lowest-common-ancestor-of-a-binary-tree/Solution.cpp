#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

class Solution {
 public:
  typedef TreeNode* x;
  bool has(x a, x b) {
    if (a == b)
      return true;
    else if (!a)
      return false;
    else
      return has(a->left, b) or has(a->right, b);
  }
  TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
    if (r == p or r == q) return r;
    bool a = has(r->left, p), b = has(r->left, q);
    if (a and b)
      return lowestCommonAncestor(r->left, p, q);
    else if (!a and !b)
      return lowestCommonAncestor(r->right, p, q);
    else
      return r;
  }
};

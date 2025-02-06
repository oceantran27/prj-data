#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/same-tree

class Solution {
 public:
  bool isSameTree(TreeNode* p, TreeNode* q) {
    if (p == NULL and q == NULL) return true;
    if (p == NULL or q == NULL or p->val != q->val) return false;
    return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

class Solution {
 public:
  unordered_set<int> s;
  void work(TreeNode* n) {
    if (!n) return;
    s.insert(n->val);
    work(n->left);
    work(n->right);
  }
  bool findTarget(TreeNode* root, int k) {
    work(root);
    for (int x : s)
      if (2 * x != k and s.count(k - x)) return true;
    return false;
  }
};

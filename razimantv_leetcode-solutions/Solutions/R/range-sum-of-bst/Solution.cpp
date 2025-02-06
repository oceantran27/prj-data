#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/range-sum-of-bst

class Solution {
 public:
  int rangeSumBST(TreeNode* n, int l, int r) {
    if (n == nullptr or l > r) return 0;
    return ((n->val >= l and n->val <= r) ? n->val : 0) +
           rangeSumBST(n->left, l, min(r, n->val)) +
           rangeSumBST(n->right, max(l, n->val), r);
  }
};

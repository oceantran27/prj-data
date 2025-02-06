#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  int minDepth(TreeNode *root) {
    if (root == NULL)
      return 0;
    int lmin = minDepth(root->left);
    int rmin = minDepth(root->right);
    if (lmin == 0 && rmin == 0)
      return 1;
    if (lmin == 0)
    {
      lmin = INT_MAX;
    }
    if (rmin == 0)
    {
      rmin = INT_MAX;
    }
    return min(lmin, rmin) + 1;
  }
};
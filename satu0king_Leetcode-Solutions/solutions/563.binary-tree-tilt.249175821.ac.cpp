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

  int ans;

public:
  int findTilt(TreeNode *root) {
    ans = 0;
    f(root);
    return ans;
  }

  int f(TreeNode *root) {
    if (!root)
      return 0;

    int l = f(root->left);
    int r = f(root->right);
    ans += abs(l - r);
    return l + r + root->val;
  }
};

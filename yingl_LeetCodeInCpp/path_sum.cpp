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
  bool hasPathSum(TreeNode *root, int sum) {
    if (NULL == root) {
      return false;
    }

    sum -= root->val;

    if ((NULL == root->left) && (NULL == root->right)) {
      return (0 == sum);
    }

    return (hasPathSum(root->left, sum) || hasPathSum(root->right, sum));
  }
};
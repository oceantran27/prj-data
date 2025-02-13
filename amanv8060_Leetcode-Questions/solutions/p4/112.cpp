#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (root == NULL) {
      return false;
    }
    if (root->val == targetSum && root->right == NULL && root->left == NULL) {
      return true;
    }
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
  }
};

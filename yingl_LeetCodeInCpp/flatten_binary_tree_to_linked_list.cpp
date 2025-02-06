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
  void flatten(TreeNode *root) {
    if (NULL != root) {
      TreeNode *left = root->left;
      TreeNode *right = root->right;

      if (left != NULL) {
        flatten(root->left);
      }

      if (right != NULL) {
        flatten(root->right);
      }

      root->left = NULL;
      if (left != NULL) {
        root->right = left;

        while (left != NULL) {
          if (NULL == left->right) {
            break;
          }

          left = left->right;
        }

        left->right = right;
      }
    }
  }
};
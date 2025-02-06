#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/all-possible-full-binary-trees/

class Solution {
 public:
  vector<TreeNode*> allPossibleFBT(int n) {
    if (n == 0 || n % 2 == 0) {
      // Cannot form a full binary tree with 0 nodes or with even number of
      // nodes
      return {};
    }

    if (n == 1) {
      // Base case: a full binary tree with a single node
      return {new TreeNode(0)};
    }

    std::vector<TreeNode*> result;

    // The root node takes 1 node, and we distribute the remaining (n-1) nodes
    // to the left and right subtrees
    for (int i = 1; i < n; i += 2) {
      // Generate all possible left subtrees with i nodes
      std::vector<TreeNode*> leftSubtrees = allPossibleFBT(i);

      // Generate all possible right subtrees with (n-i-1) nodes
      std::vector<TreeNode*> rightSubtrees = allPossibleFBT(n - i - 1);

      // Combine all possible left subtrees and right subtrees to form full
      // binary trees
      for (TreeNode* leftSubtree : leftSubtrees) {
        for (TreeNode* rightSubtree : rightSubtrees) {
          TreeNode* root = new TreeNode(0);
          root->left = leftSubtree;
          root->right = rightSubtree;
          result.push_back(root);
        }
      }
    }

    return result;
  }
};

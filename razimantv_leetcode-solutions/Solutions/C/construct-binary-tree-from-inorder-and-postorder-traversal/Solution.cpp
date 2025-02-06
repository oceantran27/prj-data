#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal

class Solution {
  unordered_map<int, int> in, post;

 public:
  TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder, int is = 0,
                      int ie = -1, int ps = 0, int pe = -1) {
    if (ie == -1) {
      if (inorder.empty())
        return NULL;
      else if (inorder.size() == 1) {
        return new TreeNode(inorder[0]);
      }
      ie = pe = inorder.size() - 1;
      in.clear();
      post.clear();
      for (int i = is; i <= ie; ++i) {
        in[inorder[i]] = post[postorder[i]] = i;
      }
    }

    TreeNode* ret = new TreeNode(postorder[pe]);
    int ip = in[ret->val];
    if (ip > is) {
      ret->left =
          buildTree(inorder, postorder, is, ip - 1, ps, ps + ip - is - 1);
    }
    if (ip < ie) {
      ret->right =
          buildTree(inorder, postorder, ip + 1, ie, pe + ip - ie, pe - 1);
    }
    return ret;
  }
};

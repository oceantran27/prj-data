#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

class Solution {
 public:
  vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<TreeNode*> s1, s2;
    vector<int> ret;
    if (root1 != NULL) {
      s1.push_back(root1);
      while (s1.back()->left != NULL) s1.push_back(s1.back()->left);
    }
    if (root2 != NULL) {
      s2.push_back(root2);
      while (s2.back()->left != NULL) s2.push_back(s2.back()->left);
    }

    while (!(s1.empty() and s2.empty())) {
      if (s1.empty() or
          (!s1.empty() and !s2.empty() and s1.back()->val > s2.back()->val)) {
        ret.push_back(s2.back()->val);
        TreeNode* next = s2.back()->right;
        s2.pop_back();
        while (next != NULL) {
          s2.push_back(next);
          next = next->left;
        }
      } else {
        ret.push_back(s1.back()->val);
        TreeNode* next = s1.back()->right;
        s1.pop_back();
        while (next != NULL) {
          s1.push_back(next);
          next = next->left;
        }
      }
    }

    return ret;
  }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/n-ary-tree-preorder-traversal


class Solution {
 public:
  vector<int> ret;
  vector<int> preorder(Node* root, int start = 1) {
    if (root == nullptr) return {};
    ret.push_back(root->val);
    for (auto n : root->children) preorder(n, 0);
    if (start) return ret;
    return {};
  }
};

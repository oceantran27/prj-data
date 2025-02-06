#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/serialize-and-deserialize-binary-tree

class Codec {
  TreeNode* work(const string& data, int& pos) {
    string cur;
    while (data[pos] and data[pos] != '#') cur += data[pos++];
    if (cur == "$") return {};
    TreeNode* ret = new TreeNode(stoi(cur));
    ret->left = work(data, ++pos);
    ret->right = work(data, ++pos);
    return ret;
  }

 public:
  // Encodes a tree to a single string.
  string serialize(TreeNode* root) {
    if (!root) return "$";
    return to_string(root->val) + '#' + serialize(root->left) + '#' +
           serialize(root->right);
  }

  // Decodes your encoded data to tree.
  TreeNode* deserialize(string data) {
    int pos = 0;
    return work(data, pos);
  }
};

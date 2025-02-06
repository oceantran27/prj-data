#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/n-ary-tree-level-order-traversal


class Solution {
 public:
  vector<vector<int>> levelOrder(Node* root) {
    if (!root) return {};

    vector<vector<int>> ret;
    vector<Node*> cur{root};
    while (!cur.empty()) {
      vector<Node*> next;
      ret.push_back({});
      for (auto n : cur) {
        ret.back().push_back(n->val);
        for (auto nn : n->children) next.push_back(nn);
      }
      cur = next;
    }
    return ret;
  }
};

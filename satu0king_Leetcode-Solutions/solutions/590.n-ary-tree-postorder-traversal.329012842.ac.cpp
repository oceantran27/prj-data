#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
  vector<int> postorder(Node *root) {
    vector<int> ans;
    f(root, ans);
    return ans;
  }

  void f(Node *root, vector<int> &ans) {
    if (!root)
      return;
    for (auto child : root->children)
      f(child, ans);
    ans.push_back(root->val);
  }
};

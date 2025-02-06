#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/populating-next-right-pointers-in-each-node


class Solution {
 public:
  Node* connect(Node* root, Node* next = NULL) {
    if (root == NULL) return root;
    root->next = next;
    if (root->left != NULL) {
      connect(root->left, root->right);
      connect(root->right, next == NULL ? NULL : next->left);
    }
    return root;
  }
};

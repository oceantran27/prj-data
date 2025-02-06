#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/clone-graph


class Solution {
  unordered_map<int, Node*> cache;

 public:
  Node* cloneGraph(Node* node) {
    if (node == NULL) return NULL;
    Node* ret = new Node(node->val);
    cache[node->val] = ret;
    for (auto next : node->neighbors) {
      if (!cache.count(next->val))
        next = cloneGraph(next);
      else
        next = cache[next->val];
      ret->neighbors.push_back(next);
    }
    return ret;
  }
};

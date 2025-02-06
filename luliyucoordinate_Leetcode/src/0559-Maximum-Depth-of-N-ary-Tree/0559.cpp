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
  int maxDepth(Node* root) {
    if (root == nullptr) {
      return 0;
    }
    int res = 0;
    for (auto c : root->children) {
      res = max(res, maxDepth(c));
    }
    return res + 1;
  }
};
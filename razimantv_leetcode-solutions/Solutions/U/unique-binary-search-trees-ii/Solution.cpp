#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/unique-binary-search-trees-ii

class Solution {
 public:
  vector<TreeNode*> generateTrees(int n, int mask = -1) {
    int fullmask = (1 << n) - 1;
    if (mask == -1) mask = (1 << n) - 1;
    if (mask == 0) return {nullptr};

    vector<TreeNode*> ret;
    for (int i = 0; i < n; ++i) {
      if (!(mask & (1 << i))) continue;
      int lmask = (1 << i) - 1, rmask = fullmask ^ lmask ^ (1 << i);
      auto lvec = generateTrees(n, mask & lmask);
      auto rvec = generateTrees(n, mask & rmask);
      for (auto l : lvec)
        for (auto r : rvec) ret.push_back(new TreeNode(i + 1, l, r));
    }
    return ret;
  }
};

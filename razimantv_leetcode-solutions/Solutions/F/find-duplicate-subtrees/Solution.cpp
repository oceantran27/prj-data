#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/find-duplicate-subtrees/

class Solution {
 public:
  map<vector<int>, pair<int, int>> cnt;
  vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
    int next = 201;
    vector<TreeNode*> ret;
    function<int(TreeNode*)> work = [&](TreeNode* node) {
      if (!node) return 0;
      vector<int> vec{node->val, work(node->left), work(node->right)};
      if (!cnt.count(vec))
        cnt[vec] = {next++, 0};
      else if (!cnt[vec].second++)
        ret.push_back(node);
      return cnt[vec].first;
    };

    work(root);
    return ret;
  }
};

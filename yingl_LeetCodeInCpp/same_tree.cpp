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
  bool isSameTree(TreeNode *p, TreeNode *q) {
    if ((NULL == p) && (NULL == q)) {
      return true;
    }
    else if ((NULL == p) || (NULL == q)) {
      return false;
    }
    else {
      if (p->val == q->val) {
        return (isSameTree(p->left, q->left) &&
            isSameTree(p->right, q->right));
      }
      else {
        return false;
      }
    }
  }
};
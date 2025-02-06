#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = []() {std::ios::sync_with_stdio(false); cin.tie(0); return 0; }();
class Solution 
{
public:
    bool isUnivalTree(TreeNode* r, int v = -1) 
    {
      return r == nullptr || ((v == -1 || r->val == v) &&
        isUnivalTree(r->left, r->val) && isUnivalTree(r->right, r->val));
    }
};
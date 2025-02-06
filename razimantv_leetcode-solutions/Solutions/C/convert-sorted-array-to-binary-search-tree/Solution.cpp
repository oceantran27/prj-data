#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

class Solution {
 public:
  TreeNode* sortedArrayToBST(vector<int>& nums, int l = 0, int r = -1) {
    if (r == -1) r = nums.size() - 1;
    int m = (l + r) >> 1;

    TreeNode* ret = new TreeNode(nums[m]);
    if (m > l) ret->left = sortedArrayToBST(nums, l, m - 1);
    if (m < r) ret->right = sortedArrayToBST(nums, m + 1, r);

    return ret;
  }
};

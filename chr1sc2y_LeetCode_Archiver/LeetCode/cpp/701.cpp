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
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        TreeNode *child = root;
        while (child) {
            if (val > child->val) {
                if (!child->right) {
                    auto *temp = new TreeNode(val);
                    child->right = temp;
                    break;
                }
                child = child->right;
            } else {
                if (!child->left) {
                    auto *temp = new TreeNode(val);
                    child->left = temp;
                    break;
                }
                child = child->left;
            }
        }
        return root;
    }
};
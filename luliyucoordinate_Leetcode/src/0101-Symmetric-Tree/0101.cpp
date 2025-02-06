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
    bool isSymmetric(TreeNode* root) 
    {
        if (root == nullptr) return true;
        return _isSymmetric(root->left, root->right);
    }
private:
    bool _isSymmetric(TreeNode* left, TreeNode* right)
    {
        if (left == nullptr and right == nullptr) return true;
        else if (left == nullptr or right == nullptr) return false;
        else if (left->val != right->val) return false;
        else return _isSymmetric(left->left, right->right) and _isSymmetric(left->right, right->left);
    }
};
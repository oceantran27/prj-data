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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) 
    {
        vector<TreeNode*> stack;
        for (int n : nums)
        {
            TreeNode* cur = new TreeNode(n);
            while (!stack.empty() and (stack.back())->val < n)
            {
                cur->left = stack.back(), stack.pop_back();
            }
            
            if (!stack.empty()) 
            {
                TreeNode* tmp = stack.back();
                tmp->right = cur;
            }
            stack.push_back(cur);
        }
        return stack[0];
    }
};
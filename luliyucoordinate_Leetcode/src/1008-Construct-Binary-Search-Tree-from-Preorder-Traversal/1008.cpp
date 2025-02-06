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
    TreeNode* bstFromPreorder(vector<int>& preorder, int bound=INT_MAX) 
    {
        if (i == preorder.size() or preorder[i] > bound) return nullptr;
        TreeNode* root = new TreeNode(preorder[i]);
        ++i;
        root->left = bstFromPreorder(preorder, root->val);
        root->right = bstFromPreorder(preorder, bound);
        return root;
    }
private:
    int i = 0;
};
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

static int x = [](){std::ios::sync_with_stdio(false);cin.tie(0);return 0;}();
class Solution 
{
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) 
    {
        if (root1 == nullptr or root2 == nullptr) return root1 == root2;
        if (root1->val != root2->val) return false;
        return (flipEquiv(root1->left, root2->left) and flipEquiv(root1->right, root2->right)) or
            (flipEquiv(root1->left, root2->right) and flipEquiv(root1->right, root2->left));
    }
};
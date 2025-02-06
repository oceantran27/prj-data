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
    void connect(TreeLinkNode *root) 
    {
        if (root == nullptr) return;
        if (root->left != nullptr) root->left->next = root->right;
        if (root->right != nullptr and root->next != nullptr) root->right->next = root->next->left;
        connect(root->left);
        connect(root->right);
    }
};
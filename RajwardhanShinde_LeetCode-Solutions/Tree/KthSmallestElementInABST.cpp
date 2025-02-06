#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

void preorder(TreeNode *root, vector<int> &pre) {
    if(root == NULL)
        return;
    pre.push_back(root->val);
    preorder(root->left, pre);
    preorder(root->right, pre);
}

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> pre;
        preorder(root, pre);
        sort(pre.begin(), pre.end());
        return pre[k-1];
    }
};

#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

void preorder(TreeNode *root, int L, int R, int &sum) {
    if(root == NULL)
        return;
    if(root->val >= L && root->val <= R) {
        sum += root->val;
    }
    preorder(root->left, L, R, sum);
    preorder(root->right, L, R, sum);
}

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        preorder(root, L, R, sum);
        return sum;
    }
};

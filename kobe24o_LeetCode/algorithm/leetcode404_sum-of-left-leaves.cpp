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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
        	return 0;
        int sum = 0;
        if(root->left && !root->left->left && !root->left->right)
        	sum += root->left->val;
        sum += sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        return sum;
    }
};

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root || (!root->left && !root->right))
        	return 0;
        int sum = 0;
        if(root->left && !root->left->left && !root->left->right)
        	sum += root->left->val;
        sum += sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        return sum;
    }
};
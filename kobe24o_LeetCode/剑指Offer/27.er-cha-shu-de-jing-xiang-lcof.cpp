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
    TreeNode* mirrorTree(TreeNode* root) {
        if(!root)
        	return root;
        mirrorTree(root->left);
        mirrorTree(root->right);
        swap(root->left,root->right);
        return root;
    }
};
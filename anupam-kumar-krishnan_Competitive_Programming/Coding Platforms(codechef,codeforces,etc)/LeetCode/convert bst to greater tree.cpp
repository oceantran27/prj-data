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
    int total = 0;
    TreeNode* convertBST(TreeNode* root) {
        if(!root){
            return NULL;
        }
        convertBST(root->right);
        total += root->val;
        root->val = total;
        convertBST(root->left);
        return root;
    }
};
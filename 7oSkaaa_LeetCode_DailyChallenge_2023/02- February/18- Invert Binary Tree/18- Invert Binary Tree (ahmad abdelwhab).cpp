#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//Author : Ahamad abdelwhab
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(!root)
            return root;    
        invertTree(root->left);
        invertTree(root->right);
        //swap every two nodes
        swap(root->left , root->right);
        return root;

    }
};

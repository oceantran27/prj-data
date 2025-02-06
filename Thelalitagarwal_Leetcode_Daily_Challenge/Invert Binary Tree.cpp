#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the "Invert Binary Tree" Problem ==>>  https://leetcode.com/problems/invert-binary-tree/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/ZOj0cIdwUYI

*/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if(!root) 
            return NULL;

        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
        
    }
};
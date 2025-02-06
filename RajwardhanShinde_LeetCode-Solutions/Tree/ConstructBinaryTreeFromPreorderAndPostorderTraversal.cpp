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
    int preIndex = 0, posIndex = 0;
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        TreeNode *root = new TreeNode(pre[preIndex++]);
        if(root->val != post[posIndex]) 
            root->left = constructFromPrePost(pre, post);
        if(root->val != post[posIndex])
            root->right = constructFromPrePost(pre, post);
        posIndex++;
        return root;
    }
};

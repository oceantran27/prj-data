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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL){
            return ans;
        }
        inorderTraversal(root->left);
        ans.push_back(root->val);
        inorderTraversal(root->right); 
        return ans;
    }
};
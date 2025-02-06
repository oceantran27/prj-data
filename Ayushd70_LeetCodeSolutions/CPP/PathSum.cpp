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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            if(sum == root->val){
                return true;
            }
            return false;
        }
        
        return hasPathSum(root->left,sum-root->val) ||
               hasPathSum(root->right,sum-root->val) ;   
    }
};
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
    bool helper(TreeNode* root,long low ,long high){
        if(root == NULL){
            return true;
        }        
        if((root->val < high) && (root->val > low)){
          return (helper(root->left, low, root->val) && helper(root->right, root->val, high));

        }
        else{
            return false;
        } 
    }
    
    bool isValidBST(TreeNode* root) {
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        return ans;
    }
};

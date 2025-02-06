#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<iostream>
#include "Tree.h"

using namespace std;

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        return hasSum(root, sum);
    }
    
    bool hasSum(TreeNode* root, int sum){
        if(!root){
            return false;
        }
        
        sum -= root->val;
        if(!root->left && !root->right){
            return sum == 0;
        }
        
        return hasSum(root->left, sum) || hasSum(root->right, sum);
    }
};

int main(){
    
}

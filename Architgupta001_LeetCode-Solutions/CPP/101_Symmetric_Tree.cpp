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
    bool flag = true;
    void traversal(TreeNode* rootleft,TreeNode* rootright){
        if(rootleft== NULL && rootright == NULL){
            return;
        }
        else if(rootleft != NULL && rootright != NULL){
            traversal(rootleft->left, rootright->right);
            if(rootleft->val != rootright->val){
                flag = false;
                return;
            }
            traversal(rootleft->right, rootright->left);
        }
        else{
            flag = false;
            return;
        }
    }
    
    bool isSymmetric(TreeNode* root) {
        traversal(root, root);
        return flag;
    }
};

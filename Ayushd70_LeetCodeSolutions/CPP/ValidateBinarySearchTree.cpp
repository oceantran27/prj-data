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
    vector<int> v;
    void inorder(TreeNode* root){
        if(root!=NULL){
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        inorder(root);
        for(int i=0;i<v.size()-1;i++){
            //cout<<v[i]<<endl;
            if(v[i]>=v[i+1]) return false;
        }
        return true;
    }
};
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
    int ans=0;
    void pre(TreeNode* root,int maxi){
        if(!root) return;
        if(root->val>=maxi){
            ans++;
            maxi = root->val;
        }
        pre(root->left,maxi);
        pre(root->right,maxi);
    }
    int goodNodes(TreeNode* root) {
        pre(root,INT_MIN);
        return ans;
    }
};
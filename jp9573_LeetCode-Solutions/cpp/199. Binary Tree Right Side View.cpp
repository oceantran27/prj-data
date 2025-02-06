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
    map<int, int> rightside;
    void find(TreeNode* root, int num){
        if(root == NULL) return;
        rightside[num] = root->val;
        find(root->left, num+1);
        find(root->right, num+1);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        if(root == NULL) return {};
        find(root, 0);
        vector<int> ans;
        for(auto it: rightside){
            ans.push_back(it.second);
        }
        
        return ans; 
    }
};
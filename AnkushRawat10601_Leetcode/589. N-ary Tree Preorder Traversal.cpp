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
    void solve(Node* root, vector<int> &ans){
        ans.emplace_back(root->val);
        for(int i = 0;i<root->children.size();i++){
            solve(root->children[i],ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        solve(root,ans);
        return ans;
    }
};
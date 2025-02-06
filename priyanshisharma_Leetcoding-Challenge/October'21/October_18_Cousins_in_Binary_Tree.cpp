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
    bool isCousins(TreeNode* root, int x, int y) {
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            bool foundX = 0, foundY = 0;
            while(sz--){
                TreeNode* cur = q.front(); q.pop();
                
                if(cur->left!=NULL && cur->right!=NULL){
                    if(cur->left->val==x && cur->right->val==y)
                        return false;
                    if(cur->left->val==y && cur->right->val==x)
                        return false;
                }
                
                if(cur->val==x)
                    foundX = 1;
                if(cur->val==y)
                    foundY = 1;
                
                if(cur->left!=NULL)
                    q.push(cur->left);
                if(cur->right!=NULL)
                    q.push(cur->right);
                
            }
            if(foundX && foundY)
                return true;
        }
        return false;
    }
};

//Time Complexity = O(n)
//Space Complexity = O(n)

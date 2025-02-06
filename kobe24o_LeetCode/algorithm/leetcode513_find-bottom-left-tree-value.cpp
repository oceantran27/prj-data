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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans;
        TreeNode *temp;
        while (!q.empty()) 
        {
        	temp = q.front();
        	ans = temp->val;
        	q.pop();
        	if(temp->right)
        		q.push(temp->right);
        	if(temp->left)
        		q.push(temp->left);
        }
        return ans;
    }
};
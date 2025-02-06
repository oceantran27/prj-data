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
    bool isCompleteTree(TreeNode* root) {
   		bool hasNULL = false;
   		queue<TreeNode*> q;
   		q.push(root);
   		TreeNode *tp;
   		while(!q.empty())
   		{
   			tp = q.front();
   			q.pop();
   			if(hasNULL && tp != NULL)
   				return false;
   			if(tp == NULL)
   				hasNULL = true;
   			else
   			{
	   			q.push(tp->left);
	   			q.push(tp->right);
	   		}
   		}
   		return true;
    }
};
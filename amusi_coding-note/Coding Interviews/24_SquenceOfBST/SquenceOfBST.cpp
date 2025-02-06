#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-30


Ŀ
´ӡÿڵ㣬ͬڵҴӡ

*****************************************/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        /* 1ָǲǿյĶӣӵʱж
        std::queue<TreeNode*> q;    // 类ѹеԪ
        q.push(root);
        vector<int> resultTree;
        // ж϶ǷΪ
        while(q.size()){         // while(!q.empty())
            root = q.front();    // 类ѹеԪ
            q.pop();             // еĵһԪ
            // ָǲǿյĶӣӵʱж
            if(!root)
                continue;
            // ǰеĵһԪش洢
            resultTree.push_back(root->val);
            q.push(root->left);    // 
            q.push(root->right);   // 
        }
        return resultTree;
        */
        
        // 2жָǷΪ
        vector<int> resultTree;
        if(root == NULL)
            return resultTree;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            resultTree.push_back(q.front()->val);
            if(q.front()->left!=NULL)
                q.push(q.front()->left);
            if(q.front()->right!=NULL)
                q.push(q.front()->right);
            q.pop();
        }
        return resultTree;
    }
};
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
Date:      2018-07-03


Ŀ
Ķ任ΪԴľ

:
ľ壺Դ 
    	    8
    	   /  \
    	  6   10
    	 / \  / \
    	5  7 9 11
    	
    	    8
    	   /  \
    	  10   6
    	 / \  / \
    	11 9 7  5

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
    // ˼·: ҷӽ㻥

    void Mirror(TreeNode *pRoot) {
        // ݹ鷨
        /*
        // жǲǿ
        if(pRoot == NULL)
            return;
        //(ѡ) жǲǷҶӽ
        if(pRoot.left==NULL && pRoot.right==NULL)
            return;
        // Ҷӽ
        TreeNode *pTemp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = pTemp;
        
        // ǷҶӽ㣬ݹ
        if(pRoot->left!=NULL)
            Mirror(pRoot->left);
        if(pRoot->right!=NULL)
            Mirror(pRoot->right);
        */
    
        // ѭǵݹ飩
        if(pRoot==NULL)
            return;
        stack<TreeNode*> stackNode;
        stackNode.push(pRoot);
        while(stackNode.size()){
            TreeNode* tree=stackNode.top();
            stackNode.pop();
            if(tree->left!=NULL || tree->right!=NULL){
                TreeNode *ptemp=tree->left;
                tree->left=tree->right;
                tree->right=ptemp;
            }
            if(tree->left)
                stackNode.push(tree->left);
            if(tree->right)
                stackNode.push(tree->right);
        }
    }
};
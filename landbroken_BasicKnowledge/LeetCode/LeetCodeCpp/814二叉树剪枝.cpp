#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include "stdafx.h"
#include <vector>
using namespace std;

/*
https://leetcode-cn.com/problems/binary-tree-pruning/description/
 root ÿֵҪô 0Ҫô 1

Ƴв 1 ԭ

( ڵ X Ϊ X Լ X ĺ)

ʾ1:
: [1,null,0,0,1]
: [1,null,0,null,1]

:
ֻкɫڵв 1 
ͼΪصĴ𰸡


ʾ2:
: [1,0,1,0,0,0,1]
: [1,null,1,null,1]



ʾ3:
: [1,1,0,1,1,0,1,0]
: [1,1,0,1,1,null,1]



˵:

Ķ 100 ڵ㡣
ÿڵֵֻΪ 0  1 
*/
/**
* Definition for a binary tree node.
*/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

class Solution {
public:
	/*
	100ڵ㣬7
	1root->val==0ڵ1֦
	2root->val==0ڵû1֦
	*/
	TreeNode* pruneTree(TreeNode* root) {
		if (root == nullptr)
		{
			return root;
		}

		//ɾҶӽڵΪ0ģɾˢԭ
		root->left = pruneTree(root->left);
		//
		root->right = pruneTree(root->right);
		//--
		if (!root->left && !root->right&&root->val == 0)
		{
			delete root;
			root = nullptr;
		}

		return root;
	}
};
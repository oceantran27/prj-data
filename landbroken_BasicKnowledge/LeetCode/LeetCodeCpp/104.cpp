#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include "stdafx.h"
#include <vector>
#include <stack>
#include <algorithm>
#include <iostream>
using namespace std;

/*
https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/description/
һҳȡ

Ϊڵ㵽ԶҶӽڵ·ϵĽڵ

˵: ҶӽڵָûӽڵĽڵ㡣

ʾ
 [3,9,20,null,null,15,7]

3
/ \
9  20
/  \
15   7
 3 
*/
//Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		int height = 0;

		if (root != nullptr)
		{
			height++;
			int max_left = maxDepth(root->left);
			int max_right = maxDepth(root->right);
			height += max(max_left, max_right);
		}

		return height;
	}
};
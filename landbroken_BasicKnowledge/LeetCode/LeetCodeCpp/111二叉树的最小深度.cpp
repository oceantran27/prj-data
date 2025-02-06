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
https://leetcode-cn.com/problems/minimum-depth-of-binary-tree/description/
һҳСȡ

СǴӸڵ㵽Ҷӽڵ·ϵĽڵ

˵: ҶӽڵָûӽڵĽڵ㡣

ʾ:

 [3,9,20,null,null,15,7],

3
/ \
9  20
/  \
15   7
С  2.
*/
//Definition for a binary tree node.
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == NULL)
			return 0;

		if (root->left == NULL)
		{
			//
			return minDepth(root->right) + 1;
		}
		else if (root->right == NULL)
		{
			//ǿգҿ
			return minDepth(root->left) + 1;
		}
		else
		{
			//Ҷǿյ
			return min(minDepth(root->left), minDepth(root->right)) + 1;
		}
	}
};
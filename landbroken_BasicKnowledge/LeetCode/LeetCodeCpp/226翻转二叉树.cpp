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
https://leetcode-cn.com/problems/invert-binary-tree/description/
תһö

ʾ

룺

4
/   \
2     7
/ \   / \
1   3 6   9


4
/   \
7     2
/ \   / \
9   6 3   1
ע:
ܵ Max Howell  ԭ  

ȸ裺90Ĺʦʹд(Homebrew)ȴ޷ʱڰװдת⣬̫ˡ
*/
/**
* Definition for a binary tree node.
*/
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root==nullptr)
		{
			return root;
		}

		TreeNode* tmp = invertTree(root->left);
		root->left = invertTree(root->right);
		root->right = tmp;

		return root;
	}
};
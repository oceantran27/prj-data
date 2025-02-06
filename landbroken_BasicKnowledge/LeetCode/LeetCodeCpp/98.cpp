#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

/*
һжǷһЧĶ

һ

ڵֻСڵǰڵ
ڵֻڵǰڵ
ҲǶ
ʾ 1:

:
2
/ \
1   3
: true
ʾ 2:

:
5
/ \
1   4
	/ \
	3   6
: false
: Ϊ: [5,1,4,null,null,3,6]
ڵֵΪ 5 ӽڵֵΪ 4 
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
	bool isValidBST(TreeNode* root) {
		//longintΪ˰intı߽
		return isValidBST(root, LONG_MIN, LONG_MAX);
	}

	bool isValidBST(TreeNode *root, long mn, long mx) {
		if (!root) return true;
		if (root->val <= mn || root->val >= mx) return false;

		bool ret;
		ret = isValidBST(root->left, mn, root->val);
		ret = ret&&isValidBST(root->right, root->val, mx);
		return ret;
	}
};

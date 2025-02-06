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
https://leetcode-cn.com/problems/merge-two-binary-trees/description/
㽫еһǵһʱһЩڵص

ҪǺϲΪһµĶϲĹڵصôǵֵΪڵϲֵΪ NULL Ľڵ㽫ֱΪ¶Ľڵ㡣

ʾ 1:

:
Tree 1                     Tree 2
1                         2
/ \                       / \
3   2                     1   3
/                           \   \
5                             4   7
:
ϲ:
3
/ \
4   5
/ \   \
5   4   7
ע: ϲĸڵ㿪ʼ
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
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
		if (t1 == nullptr)return t2;
		if (t2 == nullptr)return t1;
		
		t1->val += t2->val;
		t1->left = mergeTrees(t1->left, t2->left);
		t1->right = mergeTrees(t1->right, t2->right);

		return t1;
	}
};
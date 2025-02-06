#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include<stdio.h>
#include<malloc.h>
/**
* Definition for a binary tree node.*/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;

	TreeNode(int x) {
		val = x;
		left = NULL;
		right = NULL;
	}
};

// ˼·ֳԳƷֱջٵջԱȡ
bool isSymmetric(struct TreeNode* root) {
	struct TreeNode *stack_l[4096];
	struct TreeNode *stack_r[4096];
	struct TreeNode *l = NULL, *r = NULL;
	int size_l = 0;
	int size_r = 0;
	if (root == NULL || (root->left == NULL && root->right == NULL) )
		return true;
	else if(root->left && root->right){
		stack_l[size_l++] = root->left;
		stack_r[size_r++] = root->right;
	}
	else {
		return false;
	}
	
	while (size_l) {
		// ջ
		size_l--;
		l = stack_l[size_l];
		size_r--;
		r = stack_r[size_r];

		// ʣԱǷͬ
		if (l->val != r->val) return false;

		// ѹջ
		// ѹջstack_lҺӣstack_rӣԳѹջ
		if (l->right && r->left) {
			stack_l[size_l++] = l->right;
			stack_r[size_r++] = r->left;
		}
		else if (r->left == NULL && l->right == NULL);
		else return false;

		// ѹջstack_lӣstack_rҺӣԳѹջ
		if (l->left && r->right) {
			stack_l[size_l++] = l->left;
			stack_r[size_r++] = r->right;
		}
		else if (l->left == NULL && r->right == NULL);
		else return false;
	}
	return true;
}

// еݹ鷨
bool issame(struct TreeNode* p, struct TreeNode* q) {
	if (p == NULL&&q == NULL)
		return true;
	else if (p == NULL || q == NULL)
		return false;
	else if (p->val == q->val)
		return issame(p->left, q->right) && issame(p->right, q->left);
	else
		return false;
}
bool isSymmetric1(struct TreeNode* root) {
	return issame(root, root);
}
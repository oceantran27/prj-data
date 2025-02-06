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

struct TreeNode {
	int val;
	struct TreeNode *left = NULL;
	struct TreeNode *right = NULL;
};

////  4ms
//int max(int x, int y) { return x > y ? x : y; }
//int maxDepth1(struct TreeNode* root) {
//	if (root == NULL) return 0;
//	else if (root->left == NULL & root->right == NULL) return 1;
//	else if (root->left && root->right) return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
//	else if (root->left == NULL) return maxDepth(root->right) + 1;
//	else if (root->right == NULL) return maxDepth(root->left) + 1;
//	return 0;
//}

// ************************************      α 4ms     **************************************
int minDepth(struct TreeNode* root) {
	// 
	int depth = 0;
	// ڵַɵ
	struct TreeNode *que[4096];
	// еʼֹ
	int start = 0, end = 0;
	// ջ
	if (root)
		que[end++] = root;
	else
		return 0;

	while (end - start >0) {
		depth++;
		// ¼ҵĽڵλ
		int left_nest = start, right_nest = end;
		for (int i = left_nest; i < right_nest; i++) {
			if (que[i]->left ==NULL && que[i]->right == NULL)				
				return depth;

			if (que[i]->left)
				que[end++] = que[i]->left;
			if (que[i]->right) 		
				que[end++] = que[i]->right;
		}
		start = right_nest;
	}
	return depth;
}

// ************************************       4ms     **************************************
int minDepth(struct TreeNode* root) {
	if (NULL == root) {
		return 0;
	}
	int leftMinDepth = minDepth(root->left);
	int rightMinDepth = minDepth(root->right);
	return 1 + ((leftMinDepth == 0 || rightMinDepth == 0) ? (leftMinDepth + rightMinDepth) : (leftMinDepth < rightMinDepth ? leftMinDepth : rightMinDepth));
}


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
#include<math.h>

struct TreeNode {
	int val;
	struct TreeNode *left = NULL;
	struct TreeNode *right = NULL;

};
// ת,[1,2,2,3,3,3,3,4,4,4,4,4,4,null,null,5,5]
struct TreeNode* arrayToTree(int* nums, int numsSize) {
	// ֵΪnullNode ԪؽΪ˴޺
	const int nullNode = 0;
	struct TreeNode* tree = (struct TreeNode*)calloc(0, sizeof(struct TreeNode)*numsSize);
	for (int i = 0; i < numsSize; i++) {
		tree[i].val = nums[i];
		if (i * 2 + 1 < numsSize && nums[i * 2 + 1] != nullNode)  tree[i].left = &(tree[i*2+1]);
		if (i * 2 + 2 < numsSize && nums[i * 2 + 2] != nullNode)  tree[i].right = &(tree[i*2+2]);
	}
	return tree;
}

// ************************************            **************************************
/*
 αҶڵ㣬СȲ1Ϊƽ
*/
//bool isBalanced(struct TreeNode* root) {
//	// С
//	int max = 0, min = -1, current=0;
//	// ڵַɵ
//	struct TreeNode *que[4096];
//	// еʼֹ
//	int start=0, end=0;
//	// ջ
//	if (root) {
//		que[end++] = root;
//	}
//	else return true;
//	while (end - start >0) {
//		current++;
//		// ¼ҵĽڵλ
//		int left_nest = start, right_nest  = end;
//		for (int i = left_nest; i < right_nest; i++) {
//			if (que[i]->left)
//				que[end++] = que[i]->left;
//			else {
//				// Ҷڵ
//				max = current;
//				if (min == -1) min = current;
//				if (max - min > 1) return false;
//			}
//			if (que[i]->right) 
//				que[end++] = que[i]->right; 
//			else {
//				// Ҷڵ
//				max = current;
//				if (min == -1) min = current;
//				if (max - min > 1) return false;
//			}
//		}
//		start = right_nest;
//	}
//	return true;
//}

// ************************************      αÿڵǷƽ     **************************************
int treeDepth(struct TreeNode* root) {
	// С
	int max = 0;
	// ڵַɵ
	struct TreeNode *que[4096];
	// еʼֹ
	int start=0, end=0;
	// ջ
	if (root) 	
		que[end++] = root;
	else 
		return 0;

	while (end - start >0) {
		max++;
		// ¼ҵĽڵλ
		int left_nest = start, right_nest  = end;
		for (int i = left_nest; i < right_nest; i++) {
			if (que[i]->left)		que[end++] = que[i]->left;
			if (que[i]->right) 		que[end++] = que[i]->right; 
		}
		start = right_nest;
	}
	return max;
}

bool isBalanced(struct TreeNode* root) {
	// ڵַɵ
	struct TreeNode *que[4096];
	// еʼֹ
	int start = 0, end = 0;
	// ջ
	if (root)
		que[end++] = root;
	else
		return true;

	while (end - start >0) {
		// ¼ҵĽڵλ
		int left_nest = start, right_nest = end;
		for (int i = left_nest; i < right_nest; i++) {
			// 
			if (abs(treeDepth(que[i]->left) - treeDepth(que[i]->right)) > 1)
				return false;
			// 
			if (que[i]->left)		que[end++] = que[i]->left;
			if (que[i]->right) 		que[end++] = que[i]->right;
		}
		start = right_nest;
	}
	return true;
}

// ************************************      leetcode 4ms     **************************************
int max(int a, int b) { return a>b ? a : b; }
int treeDepth(struct TreeNode* root) {
	//ƽ򷵻ȣƽ򷵻-1
	if (root == NULL)
		return 0;
	int ld = treeDepth(root->left), rd = treeDepth(root->right);
	if (ld != -1 && rd != -1 && abs(ld - rd) <= 1)//ƽҵǰƽ⣬صǰ
		return max(ld, rd) + 1;
	return -1;
}
bool isBalanced(struct TreeNode* root) {
	return treeDepth(root) != -1;
}

int main() {
	int nums[] = { 1,2,2,3,3,3,3,4,4,4,4,4,4,0,0,5,5 };
	isBalanced(arrayToTree(nums, 17));
	return 0;
}
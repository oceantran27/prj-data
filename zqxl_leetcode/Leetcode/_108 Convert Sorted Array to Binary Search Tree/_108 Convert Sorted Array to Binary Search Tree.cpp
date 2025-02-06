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

struct TreeNode {
	int val;
	struct TreeNode *left = NULL;
	struct TreeNode *right = NULL;

};

// ************************************      leetcode ojӦǶÿһTreeNodefree,˸ôڱ󣬵ojʾfree()     ***************************
//// ݹ԰֣ȡÿζȡмԪΪһڵ㽫Ϊ
//struct TreeNode* sortedSubArrayToBST1(struct TreeNode* nums, int start, int end) {
//	int mid=0;
//	switch (end - start)
//	{
//	case 3:
//		mid = (end + start - 1) / 2;
//		nums[mid].left = &(nums[mid - 1]);
//		nums[mid].right = &(nums[mid + 1]);
//		return &(nums[mid]);
//		break;
//	case 2:
//		mid = (end + start) / 2;
//		nums[mid].left = &(nums[mid - 1]);
//		return &(nums[mid]);
//		break;
//	case 1:
//		return &(nums[start]);
//		break;
//	case 0:
//		return NULL;
//	default:
//		mid = (end + start) / 2;
//		nums[mid].left = sortedSubArrayToBST(nums, start, mid);
//		nums[mid].right = sortedSubArrayToBST(nums, mid+1, end);
//		return &(nums[mid]);
//		break;
//	}
//}
//
//struct TreeNode* sortedArrayToBST1(int* nums, int numsSize) {
//	// ȽÿԪڵ,ÿڵ㵽һ
//	struct TreeNode *t = (struct TreeNode *) malloc(sizeof(struct TreeNode) * numsSize);
//	for (int i = 0; i < numsSize; i++) {
//		t[i].val = nums[i];
//		t[i].left = NULL;
//		t[i].right = NULL;
//	}
//
//	/* ΪصĽڵеԪصַoj޷free()
//	һмtempڵֵ滻ڵһϣȻ
//	ؽڵ׵ַojȻfree()
//	ˣҲ²leetcode ojǶÿһڵ㶼ִfree()
//	*/
//	struct TreeNode temp;
//	temp = *sortedSubArrayToBST(t, 0, numsSize);
//	t[numsSize / 2] = t[0];
//	t[0] = temp;
//	t[1].left = &(t[numsSize / 2]);
//	return t;
//
//	// дסfree()ᱨΪfree()ֻ̬ܶڴ׵ַ
//	//return sortedSubArrayToBST(t, 0, numsSize);
//}

// ************************************      4msͨ     ***************************
// ݹ԰֣ȡÿζȡмԪΪһڵ㽫Ϊ
struct TreeNode* sortedSubArrayToBST(int* nums, int start, int end) {
	int mid = 0;
	struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
	struct TreeNode *nodel = (struct TreeNode *)malloc(sizeof(struct TreeNode));
	struct TreeNode *noder = (struct TreeNode *)malloc(sizeof(struct TreeNode));
	switch (end - start)
	{
	case 3:

		mid = (end + start - 1) / 2;

		nodel->val = nums[mid - 1];
		nodel->left = NULL;
		nodel->right = NULL;

		noder->val = nums[mid + 1];
		noder->left = NULL;
		noder->right = NULL;

		root->val = nums[mid];
		root->left = (nodel);
		root->right = (noder);
		return (root);
		break;
	case 2:
		free(noder);
		mid = (end + start) / 2;

		nodel->val = nums[mid - 1];
		nodel->left = NULL;
		nodel->right = NULL;

		root->val = nums[mid];
		root->left = (nodel);
		root->right = NULL;
		return (root);
		break;
	case 1:
		free(noder);
		free(nodel);
		mid = (end + start) / 2;
		root->val = nums[mid];
		root->left = NULL;
		root->right = NULL;
		return (root);
		break;
	case 0:
		return NULL;
	default:
		free(noder);
		free(nodel);
		mid = (end + start) / 2;
		root->val = nums[mid];
		root->left = sortedSubArrayToBST(nums, start, mid);
		root->right = sortedSubArrayToBST(nums, mid + 1, end);
		return (root);
		break;
	}
}

struct TreeNode* sortedArrayToBST1(int* nums, int numsSize) {
	return sortedSubArrayToBST(nums, 0, numsSize);
}

// ************************************      leetcode 4ms     **************************************
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
	if (numsSize<1)
		return NULL;
	struct TreeNode* tree = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	tree->left = tree->right = NULL;
	int k = numsSize / 2;
	tree->val = nums[k];
	tree->left = sortedArrayToBST(nums, k);
	tree->right = sortedArrayToBST(nums + k + 1, numsSize - k - 1);
	return tree;
}



int main() {
	char c[10] = "123456789";
	int nums[] = { -1,0,1,2 };
	struct TreeNode* tree;
	tree = sortedArrayToBST(nums, 4);
	// ֻͷtreeʵġ
	free(tree);
	
	return 0;
}

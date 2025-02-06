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
#include<string>
#include<math.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// ת,[1,2,2,3,3,3,3,4,4,4,4,4,4,null,null,5,5]
struct TreeNode* arrayToTree(int* nums, int numsSize) {
	// ֵΪnullNode ԪؽΪ˴޺
	const int nullNode = 0;
	struct TreeNode* tree = (struct TreeNode*)calloc(0, sizeof(struct TreeNode)*numsSize);
	for (int i = 0; i < numsSize; i++) {
		tree[i].val = nums[i];
		if (i * 2 + 1 < numsSize && nums[i * 2 + 1] != nullNode)
			tree[i].left = &(tree[i * 2 + 1]);
		else
			tree[i].left = NULL;
		if (i * 2 + 2 < numsSize && nums[i * 2 + 2] != nullNode)
			tree[i].right = &(tree[i * 2 + 2]);
		else
			tree[i].right = NULL;
	}
	return tree;
}

struct TreeNode* invertTree(struct TreeNode* root) {
	struct TreeNode* stack[4096];
	int size = 0;

	struct TreeNode* cache[4096];
	int cacheSize = 0;
	// ڵǿգڵջ
	if (!root)
		return NULL;
	stack[size++] = root;

	// ӵǰʽڵףջ
	while (stack[size - 1]->left) {
		stack[size++] = stack[size - 1]->left;
	}

	// 
	while (size) {
		// ջ
		cache[cacheSize++] = stack[--size];
		// ת
		if (cache[cacheSize-1]->right) {
			stack[size++] = cache[cacheSize - 1]->right;

			// ӵǰʽڵףջ
			while (stack[size - 1]->left) {
				stack[size++] = stack[size - 1]->left;
			}
		}
	}

	// ת
	for (int i = 0; i < cacheSize; i++) {
		struct TreeNode* temp = cache[i]->left;
		cache[i]->left = cache[i]->right;
		cache[i]->right = temp;
	}

	return root;
}

/* ݹⷨ
struct TreeNode* invertTree(struct TreeNode* root) {
	if (!root)
		return NULL;

	struct TreeNode* temp = root->right;
	root->right = invertTree(root->left);
	root->left = invertTree(temp);

	return root;
}
*/

int main() {
	int nums[] = { 4,2,7,1,3,6,9 };
	struct TreeNode* tree = arrayToTree(nums, 7);
	tree = invertTree(tree);
	return 0;
}
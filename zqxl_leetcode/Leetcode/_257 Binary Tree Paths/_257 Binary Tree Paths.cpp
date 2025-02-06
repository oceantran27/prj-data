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

/*ĽѵCĻصchar**mallocģտʼֱchar bin_tree_paths[100][100]
˵ִг֮ûˣʵĿҲ˵The returned array must be malloced*/
void dfs(struct TreeNode* root, char** bin_tree_paths, int* path, int* returnSize, int depth)
{
	int i = 0;
	path[depth++] = root->val;  //ҪdepthdepthÿһֵһģصĲ㣬depthһĵֵ
	if (root->left == NULL && root->right == NULL)
	{
		bin_tree_paths[*returnSize] = (char*)malloc(sizeof(char) * 100);
		bin_tree_paths[*returnSize][0] = 0;
		for (i = 0; i < depth - 1; i++)
		{
			sprintf_s(bin_tree_paths[*returnSize], 100, "%s%d->", bin_tree_paths[*returnSize], path[i]); //һsprintf,ͦõ
		}
		sprintf_s(bin_tree_paths[*returnSize], 100, "%s%d", bin_tree_paths[*returnSize], path[i]); //һüͷ
		(*returnSize)++;
		return;
	}
	
	if (root->left != NULL)
	{
		dfs(root->left, bin_tree_paths, path, returnSize, depth);
	}

	if (root->right != NULL)
	{
		dfs(root->right, bin_tree_paths, path, returnSize, depth);
	}
	return;  //voidͣʵһдҲ
}

char** binaryTreePaths1(struct TreeNode* root, int* returnSize)
{
	int path[100] = { 0 }, depth = 0;
	char** bin_tree_paths = (char**)malloc(sizeof(char*) * 100);
	if (root == NULL)
	{
		return NULL;
	}
	*returnSize = 0;
	dfs(root, bin_tree_paths, path, returnSize, depth);
	return bin_tree_paths;
}


/*
עleetcodeύʱҪsprintf_s滻Ϊsprintf
16ms
ûһҶڵһ·
·һ·ջһ·ʱһʽڵĸ߶Ϊ·Ŀʼ֮ǰ·Ա
*/
char** binaryTreePaths(struct TreeNode* root, int* returnSize)
{
	char** bin_tree_paths = (char**)malloc(sizeof(char*) * 100);
	if (root == NULL)		return NULL;
	*returnSize = 0;

	// 
	struct TreeNode *stack[4096];
	int ss = 0;
	// ջÿڵ
	int dStack[4096] = { 0 };
	int dss = 0;
	int cd = 0;	//浱ǰʽڵ
	// ·ջ
	int pathStack[4096] = {0};
	int pss = 0;

	stack[ss++] = root;
	dStack[dss++] = 0;
	while (ss) {
		// ջ 
		struct TreeNode *ct = stack[--ss];
		cd = dStack[--dss];
		
		// ȡǰڵĸ߶
		pss = cd;

		// ýڵ㵽·ջ
		pathStack[pss++] = ct->val;

		// ջҺ
		// ΪҶڵ㣬һ·
		if (!ct->left && !ct->right) {
			bin_tree_paths[*returnSize] = (char*)calloc(100, sizeof(char));
			for (int i = 0; i < pss-1; i++) {
				sprintf_s(bin_tree_paths[*returnSize], 100, "%s%d->", bin_tree_paths[*returnSize], pathStack[i]);
			}
			sprintf_s(bin_tree_paths[*returnSize], 100, "%s%d", bin_tree_paths[*returnSize], pathStack[pss-1]);

			(*returnSize)++;
		}
		
		if (ct->right) {
			stack[ss++] = ct->right;
			dStack[dss++] = cd + 1;
		}
			
		if (ct->left) {
			stack[ss++] = ct->left;
			dStack[dss++] = cd + 1;
		}
			
	}

	return bin_tree_paths;
}


int main() {
	int b[] = { 1,21,22,321,321,322,322,4321,4322,4,4,4,4,0,0,5,5 };
	struct TreeNode *root;
	root = arrayToTree(b, 17);
	int returnSize;
	char** res = binaryTreePaths(root, &returnSize);
	return 0;
}

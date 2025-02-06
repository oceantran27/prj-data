#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include"__Tree codes.h"

void calTreeDepth(TreeNode *t);
void setPrintBuffer(TreeNode *t);

// ɶάɶ
struct TreeNode *createTreeFromArray(int *nums, int numsSize) {
	struct TreeNode *nodes = (struct TreeNode*)calloc(numsSize, sizeof(struct TreeNode));
	for (int i = 0; i < numsSize; i++) {
		nodes[i].val = nums[i];
		int child = i * 2 + 1;
		nodes[i].left = (child < numsSize && nums[child] != numMeansNull) ? &nodes[child] : NULL;
		child = i * 2 + 2;
		nodes[i].right = (child < numsSize && nums[child] != numMeansNull) ? &nodes[child] : NULL;
	}
	return &nodes[0];
}

// ǰڵ
int depth = 0;
// ȣֻиڵΪ1
int depthMax = 0;
// ӡĿȣǰӦӡϴδӡλõ
int width = 0, column = 0, lastColumn = 0;
char **printBuffer = NULL;

void bt_print(TreeNode *bt) {
	depth = 0;
	column = 0;
	lastColumn = 0;
	depthMax = 0;
	// ĴСڴ
	calTreeDepth(bt);
	width = 3 * ((1 << (depthMax - 1)) * 2 - 1);
	int height = 1 + (depthMax - 1) * 3;
	printBuffer = (char**)malloc(height *sizeof(char*));
	for (int i = 0; i < height; i++) {
		printBuffer[i] = (char*)malloc(width * sizeof(char));
		memset(printBuffer[i],' ',width);
		printBuffer[i][width - 1] = '\0';
	}

	depth = 0;
	column = width / 2;
	lastColumn = column;
	setPrintBuffer(bt);
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("%c", printBuffer[i][j]);
		}
		printf("\n");
	}

}

// ݹҵ
void calTreeDepth(TreeNode *t) {
	if (t) {
		depth++;
		depthMax = depthMax < depth ? depth : depthMax;
		calTreeDepth(t->left);
		calTreeDepth(t->right);
		depth--;
	}
}

// õӡ
void setPrintBuffer(TreeNode *t) {
	if (t) {
		depth++;

		int val = t->val;
		for (int i = 0; i < 3; i++) {
			printBuffer[(depth - 1) * 3][column+1-i] = val%10 + 0x30;
			val /= 10;
		}
		if (depth > 1) {
			int linkLineInterval =  (column- lastColumn)/3;
			char linkChar = linkLineInterval > 0 ? '\\' : '/';
			printBuffer[(depth - 1) * 3 - 1][column - linkLineInterval] = linkChar;
			printBuffer[(depth - 1) * 3 - 2][column - 2*linkLineInterval] = linkChar;
		}
		
		int step = (1<<(depthMax-depth-1))*3;

		lastColumn = column;
		column -= step;
		setPrintBuffer(t->left);
		column += step;

		lastColumn = column;
		column += step;
		setPrintBuffer(t->right);
		column -= step;
		depth--;
	}
}



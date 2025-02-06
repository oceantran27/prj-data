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

	TreeNode(int x) {
		val = x;
	}
};


// ************************************        α4msȥƵrealloc˿ռʱĻԿÿνĿռ*2     ***************************
int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) {
	// һֱָΪ
	struct TreeNode *qu[10240];
	// һͬṹ¼ÿԪص,dc¼ǰԪص
	int d[10240], dc=0;
	//һάΪ
	int **r = (int**)malloc(4096*sizeof(int*));
	r[0] = (int*)malloc(4096*sizeof(int));
	// ¼ĴС
	*returnSize = 1;
	*columnSizes = (int*)malloc(4096 * sizeof(int));
	(*columnSizes)[0] = 0;
	// ʼֹ±꣬sΪһԪe-1ΪһԪ
	int s = 0, e = 0;
	if (root == NULL) {
		r = (int**)malloc(0 * sizeof(int*));
		*returnSize = 0;
		(*columnSizes)[0] = 0;
		return 0;
	}
	else {
		d[e] = 1;
		qu[e++] = root;
	}
	while (e - s > 0) {
		// 
		dc = d[s];
		root = qu[s++];

		// 
		if (dc == *returnSize) {
			// ¸г
			((*columnSizes)[*returnSize-1])++;
			// ýڵ
			r[dc-1][(*columnSizes)[*returnSize-1]-1] = root->val;
		}
		else {
			// 
			(*returnSize)++;
			//r = (int**)realloc(r, *returnSize * sizeof(int*));

			// ¸г
			(*columnSizes)[*returnSize-1] =1;
			// ·еڴ
			r[dc-1] = (int*)malloc(4096 * sizeof(int));
			// ýڵ
			r[dc-1][(*columnSizes)[*returnSize-1]-1] = root->val;
		}

		// Һ
		if (root->left) {
			d[e] = dc + 1;
			qu[e++] = root->left;
		}
		if (root->right) {
			d[e] = dc + 1;
			qu[e++] = root->right;
		}
	}

	// ת
	int **rr = (int**)malloc(*returnSize * sizeof(int*));
	int temp = 0;
	for (int i = 0; i < *returnSize; i++) {
		rr[i] = r[*returnSize - i - 1];
		// תcolumSize
		if(i<*returnSize/2){
			temp = (*columnSizes)[i];
			(*columnSizes)[i] = (*columnSizes)[*returnSize - i - 1];
			(*columnSizes)[*returnSize - i - 1]  = temp;
		}
	}
	//ͷڴ
	free(r);
	return rr;
}

// ****************************************************        α32msƵreallocٶȣ˿ռ      *****************************************************************
int** levelOrderBottom2(struct TreeNode* root, int** columnSizes, int* returnSize) {
	// һֱָΪ
	struct TreeNode *qu[10240];
	// һͬṹ¼ÿԪص,dc¼ǰԪص
	int d[10240], dc = 0;
	//һάΪ
	int **r = (int**)malloc(1 * sizeof(int*));
	r[0] = (int*)malloc(sizeof(int));
	// ¼ĴС
	*returnSize = 1;
	*columnSizes = (int*)malloc(1 * sizeof(int));
	(*columnSizes)[0] = 0;
	// ʼֹ±꣬sΪһԪe-1ΪһԪ
	int s = 0, e = 0;
	if (root == NULL) {
		r = (int**)malloc(0 * sizeof(int*));
		*returnSize = 0;
		(*columnSizes)[0] = 0;
		return 0;
	}
	else {
		d[e] = 1;
		qu[e++] = root;
	}
	while (e - s > 0) {
		// 
		dc = d[s];
		root = qu[s++];

		// 
		if (dc == *returnSize) {
			// ¸г
			((*columnSizes)[*returnSize - 1])++;
			// ·еڴ
			r[dc - 1] = (int*)realloc(r[dc - 1], (*columnSizes)[*returnSize - 1] * sizeof(int));
			// ýڵ
			r[dc - 1][(*columnSizes)[*returnSize - 1] - 1] = root->val;
		}
		else {
			// 
			(*returnSize)++;
			r = (int**)realloc(r, *returnSize * sizeof(int*));

			// ΪcolumnSizes·ڴ
			*columnSizes = (int*)realloc(*columnSizes, (*returnSize) * sizeof(int));
			// ¸г
			(*columnSizes)[*returnSize - 1] = 1;
			// ·еڴ
			r[dc - 1] = (int*)malloc((*columnSizes)[*returnSize - 1] * sizeof(int));
			// ýڵ
			r[dc - 1][(*columnSizes)[*returnSize - 1] - 1] = root->val;
		}

		// Һ
		if (root->left) {
			d[e] = dc + 1;
			qu[e++] = root->left;
		}
		if (root->right) {
			d[e] = dc + 1;
			qu[e++] = root->right;
		}
	}

	// ת
	int **rr = (int**)malloc(*returnSize * sizeof(int*));
	int temp = 0;
	for (int i = 0; i < *returnSize; i++) {
		rr[i] = r[*returnSize - i - 1];
		// תcolumSize
		if (i<*returnSize / 2) {
			temp = (*columnSizes)[i];
			(*columnSizes)[i] = (*columnSizes)[*returnSize - i - 1];
			(*columnSizes)[*returnSize - i - 1] = temp;
		}
	}
	//ͷڴ
	free(r);
	return rr;
}



// *********************************************************************         4ms      *****************************************************************************
// 0ms
int GetdepthofTree(struct TreeNode* root) {
	if (!root) return 0;
	int left = GetdepthofTree(root->left);
	int right = GetdepthofTree(root->right);
	if (left > right)
		return left + 1;
	else
		return right + 1;
}


int** levelOrderBottom1(struct TreeNode* root, int** columnSizes, int* returnSize) {
	if (!root) {
		return NULL;
	}
	//ȡȣ˵
	int depth = *returnSize = GetdepthofTree(root);

	//retһָһάָ룬һַԼٵģҪmalloc
	int** ret = (int**)malloc(depth * sizeof(int*));

	//columnSizesһָָָ룬ַѾָˣ˵ַ˴ŵһַѾȷˣһַŵĻǵַַȻȷôҪmalloc
	//*columnSizesһָһһάָ룬ĴСҲdepth

	*columnSizes = (int*)malloc(depth * sizeof(int));
	int front = 0, back = 0;
	struct TreeNode* queue[10000];
	queue[back++] = root;
	while (front < back) {
		int start = front, end = back;
		(*columnSizes)[--depth] = end - start;
		front = end;
		//ʼʱֻretĵַΪretһάʼַάһάĵַûȷҪmallocȷ
		ret[depth] = (int*)malloc((end - start) * sizeof(int));
		for (int i = start; i<end; i++) {
			ret[depth][i - start] = queue[i]->val;
			if (queue[i]->left) queue[back++] = queue[i]->left;
			if (queue[i]->right) queue[back++] = queue[i]->right;
		}
	}
	return ret;
}

int main() {
	struct TreeNode t3(3), t9(9), t20(20), t15(15), t7(7);
	t3.left = &t9;
	t3.right = &t20;
	t20.left = &t15;
	t20.right = &t7;

	int* columnSizes;
	int returnSize;
	levelOrderBottom(&t3, &columnSizes, &returnSize);
	return 0;
}

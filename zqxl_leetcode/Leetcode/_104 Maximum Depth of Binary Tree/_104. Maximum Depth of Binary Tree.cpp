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
     struct TreeNode *right =NULL;
};

//  4ms
int max(int x, int y) { return x > y ? x : y; }
int maxDepth1(struct TreeNode* root) {
	if (root == NULL) return 0;
	else if (root->left == NULL & root->right == NULL) return 1;
	else if (root->left && root->right) return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
	else if (root->left == NULL) return maxDepth(root->right) + 1;
	else if (root->right == NULL) return maxDepth(root->left) + 1;
	return 0;
}

// α
int maxDepth(struct TreeNode* root) {
	// һֱָΪ
	struct TreeNode *qu[10240];
	// һͬṹ¼ÿԪص,dc¼ǰԪص,max¼
	int d[10240], dc,max = 0;
	// ʼֹ±꣬sΪһԪe-1ΪһԪ
	int s = 0, e = 0;
	if (root == NULL) return 0;
	else {
		d[e] = 1;
		qu[e++] = root;
	}
	while (e - s > 0) {
		// 
		dc = d[s];
		root = qu[s++];

		max = dc > max ? dc : max;
		
		// Һ
		if (root->left) {
			d[e] = dc+1;
			qu[e++] = root->left;
		}
		if (root->right) {
			d[e] = dc + 1;
			qu[e++] = root->right;
		}
	}
	return max;
}


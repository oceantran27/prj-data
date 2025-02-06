#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include "stdafx.h"

/*
һ䰴αĽڵֵ أҷнڵ㣩

:
: [3,9,20,null,null,15,7],

3
/ \
9  20
/  \
15   7
α

[
[3],
[9,20],
[15,7]
]
*/
/**
* Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
*/
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> vec;
		if (root == NULL) {
			return vec;
		}

		queue<TreeNode*> que;
		que.push(root);

		while (!que.empty()) {
			int size = que.size();
			vector<int> vec_temp;

			while (size>0)
			{
				size--;
				TreeNode* t = que.front();
				vec_temp.push_back(que.front()->val);
				que.pop();

				if (t->left) {
					que.push(t->left);
				}

				if (t->right) {
					que.push(t->right);
				}
			}
			vec.push_back(vec_temp);
		}
		return vec;
	}
};
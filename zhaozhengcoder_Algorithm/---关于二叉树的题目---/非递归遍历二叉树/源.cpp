#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
struct TreeNode {
	T data;
	TreeNode<T> *left;
	TreeNode<T> * right;
};


template <typename T>
void visit(TreeNode<T> * node) {
	cout << node->data << "  ";
}

//ǵݹ 
//ҾԼдҪĴҪһ

/*
˼һջһĽ㣬ǰһ֮ôջpopһĽ㣬Ȼ
*/
template <typename T>
void BSTreeNoRecursive(TreeNode<T> * root) {
	vector<TreeNode<T> *> mystack;
	
	if (root == NULL) {
		return;
	}
	TreeNode<T> * p = root;
	while (true) {
		while (p!= NULL) {
			// һvectorģջ
			mystack.push_back(p);
			visit(p);
			p = p->left;
		}
		if (p == NULL) {
			mystack.pop_back();
		}
		if (!mystack.empty()) {
			p=mystack[mystack.size() - 1]->right;
			mystack.pop_back();
			continue;
		}
		else {
			break;
		}
	}
}

int main() {
	//һŶ
	TreeNode<int> *root = new TreeNode<int>();
	root->data = 10;
	root->left = NULL;
	root->right = NULL;

	TreeNode<int> *node_level1_1 = new TreeNode<int>();
	node_level1_1->data = 6;
	node_level1_1->left = NULL;
	node_level1_1->right = NULL;

	TreeNode<int> *node_level1_2 = new TreeNode<int>();
	node_level1_2->data = 14;
	node_level1_2->left = NULL;
	node_level1_2->right = NULL;


	TreeNode<int> *node_level2_1 = new TreeNode<int>();
	node_level2_1->data = 4;
	node_level2_1->left = NULL;
	node_level2_1->right = NULL;

	TreeNode<int> *node_level2_2 = new TreeNode<int>();
	node_level2_2->data = 8;
	node_level2_2->left = NULL;
	node_level2_2->right = NULL;


	TreeNode<int> *node_level2_3 = new TreeNode<int>();
	node_level2_3->data = 12;
	node_level2_3->left = NULL;
	node_level2_3->right = NULL;

	TreeNode<int> *node_level2_4 = new TreeNode<int>();
	node_level2_4->data = 16;
	node_level2_4->left = NULL;
	node_level2_4->right = NULL;

	root->left = node_level1_1;
	root->right = node_level1_2;

	node_level1_1->left = node_level2_1;
	node_level1_1->right = node_level2_2;

	node_level1_2->left = node_level2_3;
	node_level1_2->right = node_level2_4;

	//
	BSTreeNoRecursive(root);

	return 0;
}
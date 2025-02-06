#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


void InOrder(TreeNode *root, int &k, int &val)
{
	if (k == 0) return;
	if (root == nullptr) return;
	if (root->left != nullptr) InOrder(root->left, k, val);
	if (k-- == 1) val = root->val;
	if (root->right != nullptr) InOrder(root->right, k, val);
}


//////////////////////////////////////////////////////////////////////////
int kthSmallest(TreeNode* root, int k)
{
	int val;
	InOrder(root, k, val);
	return val;
}


//////////////////////////////////////////////////////////////////////////
int _solution_run(TreeNode* root, int k)
{
	return kthSmallest(root,k);
}

//#define USE_SOLUTION_CUSTOM
//int _solution_custom(TestCases &tc)
//{
//}

//////////////////////////////////////////////////////////////////////////
//#define USE_GET_TEST_CASES_IN_CPP
//vector<string> _get_test_cases_string()
//{
//	return {};
//}


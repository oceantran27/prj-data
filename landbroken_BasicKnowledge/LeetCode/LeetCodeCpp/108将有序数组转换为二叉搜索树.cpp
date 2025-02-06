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
һе飬תΪһø߶ƽ

Уһ߶ƽָһÿڵ ĸ߶Ȳľֵ 1

ʾ:

: [-10,-3,0,5,9],

һܵĴǣ[0,-3,9,-10,null,5]Աʾ߶ƽ

0
/ \
-3   9
/   /
-10  5
*/
class Solution {
public:
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.empty()) return nullptr;

		return Insert(nums, 0, nums.size() - 1);
	}

	TreeNode* Insert(vector<int>& nums, int low, int high)
	{
		if (low>high)
		{
			return nullptr;
		}

		int mid = low + round((high - low) / 2.0);
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = Insert(nums, low, mid - 1);
		root->right = Insert(nums, mid + 1, high);
		return root;
	}
};

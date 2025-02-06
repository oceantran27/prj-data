#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == target) {
		return cloned;
	}

	if (!original) {
		return nullptr;
	}

	if (auto left = getTargetCopy(original->left, cloned->left, target)) {
		return left;
	}
	return getTargetCopy(original->right, cloned->right, target);
    }
};

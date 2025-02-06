#include <bits/stdc++.h>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
/*
 * convert_sorted_array_to_binary_search_tree.cpp
 * Copyright (C) 2013 moondark <liaoxl2012@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for binary tree
 */
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    TreeNode *sortedArrayToBST(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        	int len=num.size();
			if(len==0)
			{
				return NULL;
			}
			if(len==1)
			{
				TreeNode* onenode=new TreeNode(num[0]);
				return onenode;
			}
			if(len==2)
			{
				TreeNode* twonode=new TreeNode(num[1]);
				twonode->left=new TreeNode(num[0]);
				return twonode;
			}
			int mid=len/2;
			TreeNode* mynode=new TreeNode(num[mid]);
			vector<int> nleft(num.begin(), num.begin()+mid);
			vector<int> nright(num.begin()+mid+1, num.end());
			mynode->left=sortedArrayToBST(nleft);
			mynode->right=sortedArrayToBST(nright);
			return mynode;

    }
};

int main(int argc, char* argv[])
{
	
	return 0;
}


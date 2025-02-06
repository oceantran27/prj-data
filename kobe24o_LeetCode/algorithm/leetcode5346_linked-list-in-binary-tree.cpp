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
	bool found = false;
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
    	if(!root)
    		return 0;
    	if(found)
    		return found;
    	if(root->val == head->val)
    		check(root,head);
    	isSubPath(head,root->left);
    	isSubPath(head,root->right);
    	return found;
    }

    void check(TreeNode* root, ListNode* head) 
    {
    	if((!root && head) || found)
    		return;
    	if(!head)
    	{
    		found = true;
    		return;
    	}
    	if(root->val == head->val)
    	{
    		check(root->left,head->next);
    		check(root->right,head->next);
    	}
    }
};
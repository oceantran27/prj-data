#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*****************************************
Copyright: Amusi
Author:    Amusi
Date:      2018-07-01

Ŀ
öABжBǲAӽṹpsԼһӽṹ

*****************************************/

/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    // жpRoot2ǲpRoot1ӽṹ
    // ݹ鷨: pRoot1ҵpRoot2ֵͬĽ㣬ȻжϸýµĽṹpRoot2Ƿһ
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if(pRoot1!=NULL && pRoot2!=NULL){
            // pRoot1вpRoot2ֵͬ
            if(pRoot1->val == pRoot2->val){
                result = DoesTree1HaveTree2(pRoot1, pRoot2);    // ҵ
                // ʼ
                if(!result)
                    result = HasSubtree(pRoot1->left, pRoot2);
                // ʼ
                if(!result)
                    result = HasSubtree(pRoot1->right, pRoot2);
            }
        }
        return result;
    }
    // жpRoot2ǲpRoot1
    bool DoesTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2){
        if(pRoot2==NULL)
            return true;     // pRoot2н
        if(pRoot1==NULL)
            return false;
        if(pRoot1->val != pRoot2->val)
            return false;
        
        return DoesTree1HaveTree2(pRoot1->left, pRoot2->left) && DoesTree1HaveTree2(pRoot1->right, pRoot2->right);
    }
};
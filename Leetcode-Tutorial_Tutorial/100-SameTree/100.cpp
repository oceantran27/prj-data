#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //ʵͰ5
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL && q!=NULL)    //pΪգqΪգfalse
            return false;
        else if(p!=NULL && q==NULL)    //pΪ,qΪգfalse
            return false;
        else if(p->val != q->val)      //ǰpڵֵqڵֵͬfalse
            return false;
        else
            return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);           //Ҫͬ
    }
};

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
    bool helper(TreeNode *p , TreeNode*q)
    {
         if(!p && !q)
           return true;
       if(!p)
           return false;
       if(!q)
           return false;

       if(p->val!=q->val)
           return false;

      return helper(p->right,q->right) && helper(p->left,q->left);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return helper(p,q);

    }
    
};

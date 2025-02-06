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
     int find(TreeNode*root,int maxNum,int minNum)
     {
         if(root==NULL)
       {
           return maxNum-minNum;
       } 
       maxNum = max(maxNum,root->val);
       minNum = min(minNum,root->val);

       return max(find(root->left,maxNum,minNum),find(root->right,maxNum,minNum));
     }

    int maxAncestorDiff(TreeNode* root) {
      int maxNum = 0,minNum =100000;
      return find(root,maxNum,minNum);

    }
};

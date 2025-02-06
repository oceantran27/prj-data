#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
Link to the " Sum Root to Leaf Numbers " Problem ==>>  https://leetcode.com/problems/sum-root-to-leaf-numbers/ 
   
Link to the complete Explaination Video ==>> https://youtu.be/J0k0xLA8k8c

*/


class Solution {
public:

    int sumNumbers(TreeNode* root,int sum=0) {

        if(!root){
            return 0;
        }
        sum = sum*10+root->val;

        if(!root->left && !root->right){
            return sum;
        }
        return sumNumbers(root->left,sum)+sumNumbers(root->right,sum);
    }
};
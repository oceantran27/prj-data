#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

//LINK TO THE PROBLEM: https://leetcode.com/problems/binary-tree-tilt/submissions/


class Solution
 {
public:
    int X {0};

    int Next(TreeNode *p) 
    {
        if (!p) return 0;
        int l = Next(p->left);
        int r = Next(p->right);
        X += abs(l-r);
        return p->val + l + r;
    }

    int findTilt(TreeNode* root) 
    {
        Next(root);
        return X;
    }
};
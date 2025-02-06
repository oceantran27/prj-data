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
Solution for : https://leetcode.com/problems/same-tree/
*/

bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        } else if (p && q) {
            return ((p->val == q->val) &&
                    isSameTree(p->left, q->left) &&
                    isSameTree(p->right, q->right));
        } else 
            return false;
    }
